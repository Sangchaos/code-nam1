#include<iostream>
using namespace std ;
int main() {
    int nam;
    cout<<"nhap nam: ";
    cin>>nam ;
    if ((nam%4==0 && nam%100!=0) || nam%400==0)
    cout<<"day la nam nhuan";
    else
    cout<<"day la khong phai la nam nhuan";
    return 0;
}
