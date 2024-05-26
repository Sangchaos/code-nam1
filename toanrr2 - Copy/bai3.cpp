#include <iostream>
#include <vector>
using namespace std ;
vector<vector<int> > a;
int n , m ,sumvector[500] ={0};
void chu(int n) {
    switch (n)
    {
    case 0:
        cout<<"a co vong"<<endl;
        break;
    case 1:
        cout<<"b co vong"<<endl;
        break;
    case 2:
        cout<<"c co vong"<<endl;
        break;
    case 3:
        cout<<"d co vong"<<endl;
        break;
    case 4:
        cout<<"e co vong"<<endl;
        break;
    default:
        break;
    }

}
void tong() {
    for (int i =0 ;i<m ;i++) {
        int sum =0 ;
        for (int j=0; j<a[i].size();j++) {
            sum+=a[i][j];
        }
        sumvector[i] = sum ;
    }
}
int demvong (int a, int b[][500]) {
    int dem =0 ;
    for (int i =0 ;i<m ;i++) {
        if (sumvector[i]==1 && b[a][i]==1) dem++;
    }
    return dem ;
}
void bac(int b[][500]) {
    for (int i =0 ;i<n;i++) {
        int sum=0 ;
        for (int j =0 ;j<m;j++) {
            sum+=b[i][j];
        }
        cout<<"bac cua dinh "<<i<<" :"<<sum + demvong(i,b)<<endl;
    }
}
bool ktra (vector<int> a1 , vector<int> b1) {
    for (int i =0 ;i<n ;i++) {
        if (a1[i] != b1[i]) 
        return false ;
    }
    return true ;
}
void vong() {
    for (int i =0 ;i<m;i++) {
        if (sumvector[i]==1) {
        chu(i) ;

        }
    }
}
void songsong() {
    for (int i= 0 ;i<m ;i++) {
        for (int j =i ;j<m ;j++) {
            if (ktra(a[i], a[j]) && i !=j ) {
                cout<<i<<" song song "<<j<<endl;
            }
        }
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
    tong() ;
    songsong();
    vong();
    bac(b) ;
}
