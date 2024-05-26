#include<iostream>
using namespace std;
int main(){
    int n;
    int dem=0;
    cin>>n;
  if( n<2)
  cout<<"day ko phai la so nguyen to";
  else
   
    for (int i=2; i<n;i++){
    if (n%i==0)
    dem++; }
    if (dem==0)
    cout<<"day la so nguyen to";
    else 
    cout<<"day ko phai la so nguyen to";
   return 0;
} 