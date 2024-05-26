#include<iostream>
#include<math.h>
using namespace std;
int main() {
    float x, y ,d ;
    cout<<"nhap x = ";
    cin>>x;
    cout<<"nhap y = ";
    cin>>y;
    d= ((0.5*x +y -100)/ sqrt(0.5*0.5+1)) ;
    if ( 200>=x>=0 && 0<=y<=100 && d<0 && abs(d)<=89.4427191)
        cout<<"thuoc tam giac";
    else 
        cout<<"ko thuoc tam giac";
    return 0;
}