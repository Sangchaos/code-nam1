#include<iostream>
#include<math.h>
using namespace std ;
int main()
{
    cout<<"nhap lan luot cac toa do: ";
    int x1, y1, x2, y2;
    float d;
    cin>>x1>>y1>>x2>>y2;
    d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)) ;
    cout<<"khoang cach giua 2 diem la "<<d;
    return 0;
}