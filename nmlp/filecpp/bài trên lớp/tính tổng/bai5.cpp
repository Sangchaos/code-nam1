#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int n, i;
   float s=0;
   cin>>n;
   
    for(i=1; i<=n; i++){
      s+= float(i)/ (i+1);
    }
cout<<s;
}