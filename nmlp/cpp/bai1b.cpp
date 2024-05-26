#include<iostream>
using namespace std ;
int main() {
    int n ;
    cout<<"nhap n = ";
    cin>>n;
    int tong =0;
    for (int i=1; i<=n;i++) {
        tong +=i*i;
    }
    cout<<"tong = "<<tong;
    return 0;

}