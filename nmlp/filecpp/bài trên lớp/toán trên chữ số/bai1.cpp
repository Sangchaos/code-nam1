#include<iostream>
using namespace std;
int main(){
  int n;
  int tong=0;
  int dem=0;
   cin>>n;
 while(n>0) {
  tong+=(n%10);
  dem++;
  n=n/10;
  
 }
  cout<<dem<<" "<<tong;
    return 0;
}