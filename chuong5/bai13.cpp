#include <iostream>

using namespace std ;

int ham(int n) {
    int tong =0 ;
    if (n == 0) return 0 ;
    if (n == 1) return 1 ;
    if ( n%2 == 0) 
    return tong + ham(n/2) ; 
    else 
    return tong + ham(n/2) + ham(n/2 + 1) ;
}

int main() {
    int n ;
    cin >> n ;
    cout << ham(n) << endl ;
    return 0 ;
}