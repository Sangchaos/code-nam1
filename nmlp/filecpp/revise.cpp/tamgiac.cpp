#include <iostream> 
using namespace std ;
 int main() {
    int a, b, c ;
    cout<<"nhap cac canh ";
    cin>>a>>b>>c;
    if ( (a+b>c) && (a+c>b) && (b+c>a)) {
       if ( ((a*a+b*b==c*c) || (b*b + c*c==a*a) || (a*a+ c*c==b*b)) || ( a==b || b==c || a==c) ) {
         
                if ( a==b || b==c || a==c) {
                    if (a==b && b==c)
                    cout<<"tam giac deu";
                    else 
                    cout<<"tam giac can";
                    }
               
                
                if ((a*a+b*b==c*c) || (b*b + c*c==a*a) || (a*a+ c*c==b*b)){
                    if (a==b || b==c || a==c)
                    cout<<"tam giac vuong can";
                    else 
                    cout<<"tam giac vuong";
                }
       }
       else 
       cout<<"tam giac thuong";
            
    }
    else 
    cout<<"khong tao thanh tam giac";     
    return 0;

 }