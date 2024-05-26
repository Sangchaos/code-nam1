#include <iostream>
#include <string>
using namespace std ;

int main() {
    freopen ("input.txt", "r", stdin) ;
    freopen ("output.txt", "w", stdout) ;
    int n ;
    cin>>n ;
    int dem =0 ;
    while (n!=0)
    {
        dem+=n%2;
        n/=2;
    }  
    cout<<dem;
}