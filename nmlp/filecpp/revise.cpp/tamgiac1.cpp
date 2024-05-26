#include <iostream> 
#include<math.h>
using namespace std ;
 int main() {
    int a, b ;
    float c;
    c =sqrt(2) ;
    cout<<"nhap cac canh ";
    cin>>a>>b;
    if ( (a+b>c) && (a+c>b) && (b+c>a)) {
       if(a==b&&b==c)
       cout<<"tam giac deu";
       else if((a*a+b*b==c*c) || (b*b + c*c==a*a) || (a*a+ c*c==b*b)){
            cout<<"tam giac vuong can";
            else 
            cout<<"tam giac can";
       }
       else if((a*a+b*b==c*c) || (b*b + c*c==a*a) || (a*a+ c*c==b*b))
       cout<<"tam giac vuong";
       else cout<<"tam giac thuong";
    return 0;
    }

    cout<<"khong la tam giac";
 }