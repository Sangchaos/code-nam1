#include<iostream>
using namespace std ;
int main () {
    int n ;
    float tong=0;
    cout<<"nhap n = ";
    cin>>n;
    for (int i= 1 ;i<=n ;i++){
        tong += (float) 1/ (i * (i+1)) ;
    }
    cout<<"tong = "<<tong;
    return 0;
}