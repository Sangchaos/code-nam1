#include <iostream>
#include <vector>
using namespace std;
int n ;
vector<vector<int> > matran;

void songsong1() {
    for (int i =0;i<n;i++) {
        for (int j =i +1;j<n;j++) {
            if (matran[i][j]==2 ) {
                cout<<"cap canh "<<i<<" va "<<j<<" song song cung huong"<<endl;
            }
        }
    }
}

void songsong2() {
    for (int i =0;i<n;i++) {
        for (int j =i +1;j<n;j++) {
            if (matran[i][j]==1 && matran[j][i]==1  ) {
                cout<<"cap canh "<<i<<" va "<<j<<" song song nguoc huong"<<endl;
            }
        }
    }
}

void nuabac() {
    for (int i =0 ;i<n;i++) {
        int sum =0 ;
        int sum2 = 0;
        for (int j =0 ;j<n;j++) {
            
            sum+=matran[i][j] ;
            if ( i!=j) 
            sum2+=matran[j][i];
 
        }
        
        cout<<"nua bac ngoai "<<i<<" la "<<sum<<endl;
        cout<<"nua bac trong "<<i<<" la "<<sum2<<endl;
        cout<<"---------------"<<endl;
    }
}
int main() {
    cin>>n;
    for (int i=0;i<n;i++) {
        vector<int> tmp ;
		for (int j=0;j<n;j++) {
			int x ; cin>>x;
            tmp.push_back(x) ;
		}
        matran.push_back(tmp);
	}
    songsong1();
    cout<<"---------------"<<endl;
    songsong2();
    cout<<"---------------"<<endl;
    nuabac();
    return 0;
}
