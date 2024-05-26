#include<iostream>
using namespace std;
int main(){
    int n;
    int tich=1;
    cout<<"nhap n = ";
    cin>>n;
    while(n>0) {
        tich*=(n%10);
        n=n/10;
    }
    cout<<"tich = "<<tich;
    return 0;
}