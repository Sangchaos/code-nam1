#include<iostream>
using namespace std;
int main(){
    int n;
    int dem=0;
    cout<<"nhap n = ";
    cin>>n;
    while(n>0) {
        dem++;
        n=n/10;
    }
    cout<<"co "<<dem<<" so";
    return 0;
}