#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"nhap n = ";
    cin>>n;
    int max = n%10;
    while(n>0) {
        if (n%10 >max)
        max =n%10;
        n=n/10;
    }
    cout<<"max = "<<max;
    return 0;
}