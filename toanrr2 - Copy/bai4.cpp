#include <iostream>
#include <cmath>
#include <vector>
using namespace std ;
vector<vector<int> > a;
int n , m ,sumvector[500] ={0} , sumcanh[500]={0};

char chu(int n) {
    switch (n)
    {
    case 0:
        return 'a';
    case 1:
        return  'b'; 
    case 2:
       return 'c' ;
    case 3:
       return 'd' ;
    case 4:
        return 'e' ;
    default:
        break;
    }
}

void tong2 (int b[500][500]) {
    for(int i =0 ;i<n;i++) {
        int sum = 0; 
        for (int j =0 ;j <m ;j++) {
            sum+= abs(b[i][j]) ;
        }
        sumcanh[i] = sum ;
    }
}
int test (int b[][500], int i , int j) {
    int sum =0 ;
    for (int k =0 ;k<m ;k++)
    sum+= abs(b[i][k]) ;
    if (!(sum %2 ==1 && sumvector[j]==1) ) return false ;
    return true ;
}
void tong() {
    for (int i =0 ;i<m ;i++) {
        int sum =0 ;
        for (int j=0; j<a[i].size();j++) {
            sum+=abs(a[i][j]);
        }
        
        sumvector[i] = sum ;
    }
}
bool ktra (vector<int> a1 , vector<int> b1) {
    for (int i =0 ;i<n ;i++) {
        if (abs(a1[i] != abs(b1[i]))) 
        return false ;
    }
    return true ;
}
void songsong() {
    for (int i= 0 ;i<m ;i++) {
        for (int j =i ;j<m ;j++) {
            if (ktra(a[i], a[j]) && i != j ) {
                int sum =0 ;
                for (int k = 0; k< n ;k++) {
                    sum += (a[i][k] + a[j][k]) ;
                }
                if (sum==4) {
                    cout<<chu(i)<<" song song cung huong "<<chu(j)<<endl;
                }
                else 
                    cout<<chu(i)<<" song song nguoc huong "<<chu(j)<<endl;
            }
        }
    }
}

void nuabac (int b[500][500]) {
    for (int i = 0 ;i<n ;i++) {
        int dem = 0,dem2=0 ;
        for (int j = 0; j<m ;j++) {
            if (b[i][j]==1) {
                dem++ ;
            }
            if (b[i][j]==-1 ) {
                dem2++;
               
            }
        }
        cout<<"nua bac ngoai "<<i<<" la: "<<dem<<endl;
        cout<<"nua bac trong "<<i<<" la: "<<dem2<<endl;
    }
}
int main() {
    int b[500][500];
    cin>>n>>m;
    for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			cin>>b[i][j] ;
		}
	}

    for (int i =0 ;i< m;i++) {
        vector<int> tmp ;
        for (int j =0 ;j<n ;j++) {
            tmp.push_back(b[j][i]) ;
        }
        a.push_back(tmp) ;
    }
    tong();
    tong2(b);
    songsong() ;
    nuabac(b) ;
} 
