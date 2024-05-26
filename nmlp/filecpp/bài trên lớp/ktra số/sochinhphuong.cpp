#include<iostream>
#include<math.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
using namespace std;
int main(){
    int n;
    cout<<"nhap n = ";
    cin>>n;
    if (sqrt(n)-(int)sqrt(n)==0)
    cout<<"day la so chinh phuong";
    else
    cout<<"day khong phai la so chinh phuong";
    return 0;
}