#include<iostream>
using namespace std ;
int main()
{
    int i, n;
    int ng= 1;
    cout<<"n=";
    cin>>n;
    for ( i=1; i<=n;i++) {
        ng*=i ;
    }
    cout<<ng;
    return 0;
}