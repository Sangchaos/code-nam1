#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c, denta,x1, x2 ;
    cout<<"nhap cac so a b c: ";
    cin>>a>>b>>c;
    denta= b*b-4*a*c ;
   
    if (denta>=0 ) 
    {
        if (denta>0) 
        {
            x1= (-b+ sqrt(denta))/(2*a) ;
            x2= (-b- sqrt(denta))/(2*a) ;
            cout<<"phuong trinh co 2 nghiem " <<"x1 = "<<x1<<" "<<"x2 = "<<x2;
        }
        else 
            cout<<"phuong trinh co nghiem kep x = "<<(-b)/(2*a);
    }
    else 
        cout<<"phuong trinh vo nghiem";
    return 0;

}

