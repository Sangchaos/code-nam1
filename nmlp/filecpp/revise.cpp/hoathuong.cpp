#include<iostream>
using namespace std ;
int main () {
    char kt ;
    cout<<"nhap ky tu: ";
    cin>>kt;
    if ( kt <'A' || kt> 'z') 
        cout<<"ko thuoc pham vi ";
    else 
        if (kt >='a' && kt <='z')
        {
        kt= kt- 32; ;
        cout<<kt;
        }
        else 
        {
        kt+= 32;
        cout<<kt;
        }
        return 0;
}