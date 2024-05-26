#include<iostream>
using namespace std ;
int main() {
    int a ,b ;
    cout<<"nhap a, b ";
    cin>>a>>b;
    while (b!=0) {
        int r= a % b;
        a=b;
        b=r;
    }
    cout<<"uoc chung lon nhat la: "<<a;
    return 0;
}