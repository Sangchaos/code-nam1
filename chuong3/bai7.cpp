#include <iostream>

using namespace std ; 

int main () {
    int n ;
    cin>>n;
    long long sau = 0, truoc =1, tong =0;
    for (int i =0 ;i<=n;i++) {
       cout<<tong<<" " ;
       tong = truoc + sau ;
       truoc = sau ;
       sau = tong ;
       
    }
}
