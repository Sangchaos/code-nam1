#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int dem=0;
    cout<<"nhap n = ";
    cin>>n;
    if( n<2) {
        cout<<"day khong phai la so nguyen to";
        return 0;
    }
    else
        for (int i=2; i<sqrt(n);i++){
        if (n%i==0)
        dem++; 
        }
    if (dem==0)
        cout<<"day la so nguyen to";
    else 
        cout<<"day khong phai la so nguyen to";
   return 0;
} 