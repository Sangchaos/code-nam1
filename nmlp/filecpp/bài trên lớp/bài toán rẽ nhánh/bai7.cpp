#include<iostream>
#include<math.h>
using namespace std ;
int main()
{
    int x, y, d;
    cin>>x>>y;
    d= sqrt(x*x+ y*y) ;
    if( d<10)
    cout<<"diem nay thuoc duong tron ban kinh bang 10";
    else 
    cout<<"diem nay ko thuoc duong tron ban kinh bang 10";
    return 0;
}