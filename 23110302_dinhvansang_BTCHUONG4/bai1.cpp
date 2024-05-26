// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>
using namespace std ;
int n, a[500] ;
int m ;

void Try(int i) {
    if (n==i) {
        return ;
    }
    if (a[i] < m ) {
        m = a[i] ;
    }
    Try(i+1) ;
}
int main() {
    freopen ("input.txt", "r", stdin) ;
    freopen ("output.txt", "w", stdout) ;
    cin>>n;
    for (int i =0 ;i<n ;i++) {
        cin>>a[i] ;
    }
    m= a[0] ;
    Try(1) ;
    cout<<m;
}