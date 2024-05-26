#include<iostream>
using namespace std;
int main(){
    int n;
    int tong=0;
    cout<<"nhap n = ";
    cin>>n;
    while(n>0) {
        if ((n%10) %2==0) {
        tong+=(n%10);
        }
        n=n/10;
    }
    cout<<"tong chu so chan = "<<tong;
    return 0;
}