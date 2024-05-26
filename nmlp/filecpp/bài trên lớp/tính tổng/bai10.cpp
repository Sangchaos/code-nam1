#include<iostream>
#include<math.h>
using namespace std ;
int main() 
{
   int n ,x;
   double lt;
   long long tong=0;
   cout<<"nhap x = ";
   cin>>x;
   cout<<"nhap n = ";
   cin>>n;
   for(int i=0; i<=n;i++){
    lt =pow(x,(2*i+1));
    tong+= lt;
   }
   cout<<"tong luy thua le = "<<tong;
  return 0;
}