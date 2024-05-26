#include <iostream>
#include <vector>

using namespace std ;

int n,k , a[100] , final =0;

void khoitao() {
    for (int i =1 ;i<=k ;i++) {
        a[i]= i ;
    }
}
void sinh() {
    int i =k ;
    while (i>0 && a[i]==n-k+i ) {
        i-- ;
    }
    if (i==0) {
        final=1;
    }
    else {
        a[i]++;
        for (int j = i+1 ;j<=k ; j++) {
            a[j] = a[j-1 ] + 1;
        }
    }
}

vector<vector<int>> res ;

int main() {
    cin>>k>>n ;
    khoitao();
    while (final ==0) {
        vector<int> tmp ;
        for (int i =1 ;i<=k;i++) {
            tmp.push_back(a[i]) ;
        }
        res.push_back(tmp);
        tmp.clear();
        sinh() ;
    }
    for (int i =0 ;i < res.size(); i++) {
        for (int x : res[i]) {
            cout<<x<<" " ;
        }
        cout<<endl;
    }
}