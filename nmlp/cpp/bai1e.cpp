#include<iostream>
using namespace std ;
int main () {
    int n ;
    float tong=0;
    cout<<"nhap n = ";
    cin>>n;
    for (int i= 0 ;i<=n ;i++){
        tong += (float) 1/ (2*i+1) ;
    }
    cout<<"tong = "<<tong;
    return 0;
}