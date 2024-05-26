#include<iostream>
#include<string>
using namespace std ;
int main()
{
    string mk;
    string mkd="sang1234" ;
   
    cout<<"nhap mat khau: ";
     vui_long_thu_lai:
    cin>>mk;
    if ( mk==mkd) 
   { cout<<"mat khau dung"; 
 
    }
    else 
    cout<<"mat khau sai.vui long nhap dung mat khau: ";
   { goto vui_long_thu_lai ; }
    return 0;
}