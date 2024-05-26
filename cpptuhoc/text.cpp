#include <iostream>

using namespace std ;

int main() {
    int n, i=0 ; cin>>n;
    int a[n] ;
    for (int i =0 ;i<n ;i++) {
        cin>>a[i] ;
    }
    while (i<n /2 ) {
        int tmp = a[i] ;
        a[i]= a[n-i-1] ;
        a[n-i-1] = tmp ;
        i++;
      
    }
    for (int i =0 ;i<n ; i++) {
        cout<<a[i]<<"\t" ;
    }
}