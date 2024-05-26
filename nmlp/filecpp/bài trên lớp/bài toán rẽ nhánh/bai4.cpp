#include<iostream>
#include<math.h>
using namespace std ;
int main()
{
    float a,b,c,d ,e,f ,x ,y,mau,h,j,k ;
    cout<<"nhap cac he so: "<<endl;
    cin>>a>>b>>e>>c>>d>>f ;
    x= (e*d-b*f)/(a*d-b*c) ;
    y= (a*f-e*c)/(a*d-b*c) ;
    mau=(a*d-b*c);
    h=a/c;
    j=b/d;
    k=e/f;
    if (  mau=0 || (h==j && j!=k))
    cout<<"he phuong trinh vo nghiem";
    else
    { 
        if(h==j && j==k)
            cout<<"he vo so nghiem";
        else
            cout<<"he phuong trinh co nghiem: "<<x<<" "<<y;
    }
    return 0;

}