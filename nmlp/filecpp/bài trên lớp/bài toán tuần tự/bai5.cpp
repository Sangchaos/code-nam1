#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"nhap nam: ";
    cin>>n;
    if((n%4==0 && n%100!=0) || n%400==0)
    cout<<"day la nam nhuan";
    else
    cout<<"day ko phai nam nhuan";
    return 0;
}
