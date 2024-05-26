#include<iostream>
#include<math.h>
using namespace std ;
    int main(){
    int  n, i, x, m;
    cout<<"nhap n = ";
    cin>>n;
    cout<<"gioi han: ";
    cin>>m;
   for(i=0; i<=n; i++){
    x=(2*i +1);
    cout<<x*x<<" ";
    if (x*x > m) {
        break;
    }
   }
return 0;
}