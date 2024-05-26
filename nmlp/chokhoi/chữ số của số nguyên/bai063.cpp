#include<iostream>
using namespace std;
int main(){
    int n;
    int tich=1;
    cout<<"nhap n = ";
    cin>>n;
    while(n>0) {
        if ((n%10)%2==1)
        tich*=(n%10);
        n=n/10;
    }
    cout<<"tich so le = "<<tich;
    return 0;
}