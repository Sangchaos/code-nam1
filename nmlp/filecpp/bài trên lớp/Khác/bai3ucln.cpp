#include<iostream>
#include<math.h>
using namespace std;
int main () {
    int a, b ;
    cout<<"nhap a = ";
    cin>>a;
    cout<<"nhap b = ";
    cin>>b;
    if ( a< b)
    swap (a, b) ;
    while ( a%b!=0) {
        int r= a%b;
        a=b ;
        b= r;
        
    }
    cout<<b;
}
