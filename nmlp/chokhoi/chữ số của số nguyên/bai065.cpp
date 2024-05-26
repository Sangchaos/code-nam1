#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"nhap n = ";
    cin>>n;
    int min = n%10;
    while(n>0) {
        if (n%10 <min)
        min =n%10;
        n=n/10;
    }
    cout<<"min = "<<min;
    return 0;
}