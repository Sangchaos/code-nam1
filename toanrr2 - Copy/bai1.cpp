#include <iostream>
#include <vector>
using namespace std;
int n ;
vector<vector<int> > matran;
int sum(vector<int> a) {
    int tong =0 ;
    for (int i=0 ;i<n;i++) {
        tong+=a[i] ;
    }
    return tong;
}

void bac() {
    for (int i =0 ;i<n;i++) {
        cout<<i<<" co bac la: "<<sum(matran[i])<<endl;
    }
}

void vong() {
    for (int i=0 ;i<n;i++) {
        if (matran[i][i]==1) {
        	matran[i][i]=2 ; 
            cout<<i<<" co vong"<<endl;
        }
    }
}
void songsong() {
    for (int i =0;i<n;i++) {
        for (int j =i +1;j<n;j++) {
            if (matran[i][j]==2 ) { 
                cout<<"cap canh "<<i<<" va "<<j<<" song song"<<endl;
            }
        }
    }
}
void treo() {
    for(int i =0 ;i<n;i++) {
        if (sum(matran[i])==1) {
            cout<<i<<" co dinh treo"<<endl;
        }
    }
}
void colap() {
    for(int i =0 ;i<n;i++) {
        if (sum(matran[i])==0) {
            cout<<i<<" dinh co lap"<<endl;
        }
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
    vong();
    cout<<"---------------"<<endl;
    bac(); 
    cout<<"---------------"<<endl;
    songsong();
    cout<<"---------------"<<endl;
    treo();
    cout<<"---------------"<<endl;
    colap() ;
    return 0 ;
}
