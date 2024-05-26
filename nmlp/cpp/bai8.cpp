#include<iostream>
using namespace std ;
int main() {
    int a ,b ,c ;
    cout<<"nhap a, b, c ";
    cin>>a>>b>>c;
    while (a%b!=0) {
        int r= a % b;
        a=b;
        b=r;
    }
    int x=b ;
     while (x%c!=0) {
        int r= x % c;
        x=c;
        c=r;
    cout<<"uoc chung lon nhat la: "<<c;
     }
     return 0;
}