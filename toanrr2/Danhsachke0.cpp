#include <iostream>
#include <vector>
using namespace std ;

vector<int> arr[1001] ;
void vong(int x) {
    for (int i = 1 ;i<=x;i++) {
        int dem =0 ;
        int dem2=1 ;
        for (int x = 0 ;x<arr[i].size();x++) {
            if (arr[i][x] == i) {
                dem++ ;
                if (dem==2) {
                    cout<<i<<": dinh co vong"<<endl;
                }
            }
            else if (arr[i][x] != i && arr[i][x]== arr[i][x+1] ) {
                dem2++ ;
                if (dem2==2) {
                    cout<<i<<": co canh song song"<<endl;
                }
            }
        }
    }
}

void bac(int x) {
    for (int i =1 ;i<=x;i++) {
        cout<<i<<": co bac la "<<arr[i].size()<<endl;
        if (arr[i].empty()) {
            cout<<i<<": dinh co lap"<<endl;
        }
        else if (arr[i].size()==1) 
            cout<<i<<": dinh treo"<<endl;
    }
}
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout) ;
    int x , r ;
    cin>>x>>r ;
    for (int i =0 ;i<r;i++) {
        int m , n ; cin>>m>>n ;
        arr[m].push_back(n) ;
        //if (n!=m) {
        arr[n].push_back(m) ;
        //}
    }
    for (int i = 1;i<= x; i++) {
        cout<<i<<" : ";
        for (int k : arr[i]) {
            cout<<k<<" ";
        }
        cout<<endl;
    }
    bac(x);
    vong(x) ;

}

