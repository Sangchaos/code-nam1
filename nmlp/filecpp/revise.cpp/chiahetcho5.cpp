#include<iostream>
using namespace std ;
int main()
{
    int i,n ;
    cout<<"n=";
    cin>>n;
    for( i=1; i<=n; i++) {
       if ( i%5==0) 
        cout<<i<<" ";
    }
}