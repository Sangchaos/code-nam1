#include<iostream>
using namespace std ;
int main() {
    int n;
    int sumi=0;
    cout<<"nhap n = ";
    cin>>n;
    for(int i=1; i<n;i++) {
        if( n%i==0)
            sumi+=i;
    }
    if(sumi==n)
        cout<<"day la so hoan chinh";
    else 
        cout<<"day khong phai la so hoan chinh";
 return 0;
}
