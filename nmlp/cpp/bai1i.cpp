#include<iostream>
using namespace std ;
int main () {
    int n , mau=0;
    float tong=0;
    cout<<"nhap n = ";
    cin>>n;
    for (int i= 1 ;i<=n ;i++){
        mau +=i;
        tong += (float) 1/ mau  ;
    }
    cout<<"tong = "<<tong;
    return 0;
}