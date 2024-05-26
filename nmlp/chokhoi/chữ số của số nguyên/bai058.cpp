#include<iostream>
using namespace std;
int main(){
    int n;
    int tong=0;
    cout<<"nhap n = ";
    cin>>n;
    while(n>0) {
        tong+=(n%10);
        n=n/10;
    }
    cout<<"tong = "<<tong;
    return 0;
}