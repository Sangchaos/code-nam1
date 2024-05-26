#include<iostream>
using namespace std;
int main(){
    int n;
    int dem=0;
    cout<<"nhap n = ";
    cin>>n;
    while(n>0) {
        if ((n%10) %2==1) {
        dem++;
        }
        n=n/10;
    }
    cout<<"co "<<dem<<" so le";
    return 0;
}