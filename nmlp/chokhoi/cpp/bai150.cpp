#include<iostream>
using namespace std ;
int main() {
    int a ,b ;
    cout<<"nhap a, b ";
    cin>>a>>b;
    int x=a, y =b;
    while (y!=0) {
        int r= x % y;
        x=y;
        y=r;
    }
    cout<<"boi chung nho nhat la: "<<a*b/x; 
    return 0;
   
}