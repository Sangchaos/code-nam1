#include<iostream>
#include<math.h>
using namespace std ;
int main()
{
    float x, y, d, e,f;
    cin>>x>>y;
    d= sqrt(x*x+ y*y) ;
    e= sqrt((x*x)+(y-10)*(y-10));
    
    if (d<=10 && e<=14.14213562 && y>=0 )
    cout<<"thuoc";
    else
    cout<<"ko thuoc";

    

}