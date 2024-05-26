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
   for(int i=1; i<=n;i++){
    lt =pow(x,(2*i));
    tong+= lt;
   }
   cout<<"tong luy thua chan = "<<tong;
  return 0;
}