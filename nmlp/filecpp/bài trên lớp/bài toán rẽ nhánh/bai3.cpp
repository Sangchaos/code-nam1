#include<iostream>
using namespace std ;
int main ()
{
    int a, b ;
    float x;
    cout<<"nhap a = ";
    cin>>a;
    cout<<"nhap b = ";
    cin>>b;
    x=(float)-b/a;
    if (a==0)
        if (b==0)
        cout<<"pt vo so nghiem";
        else 
        cout<<"pt vo nghiem";
    else 
        cout<<"phuong co 1 nghiem"<<" "<<x;
    return 0;
}