#include<iostream>
#include<cmath>
using namespace std ;
int main () {
    int n, x ;
    int  luy_thua =1 ;
    float giai_thua =1 ;
    float  tong =0;
    cout<<"nhap x ,n ";
    cin>>x>>n;
    for (int i=1;i<=n; i++) { 
        luy_thua *= x;
        tong += (double long ) (luy_thua) / ( giai_thua *=i);
    }
cout<<tong;

}