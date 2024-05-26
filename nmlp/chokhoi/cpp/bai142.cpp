#include<iostream>
using namespace std;
int main(){
    int n, x;
    cout<<"nhap n = ";
    cin>>n;
    int tong=0;
    while(n>0) {
        x=n%10;
        tong=tong*10 +x;
        n=n/10;
    }
    cout<<tong;
    return 0;
}