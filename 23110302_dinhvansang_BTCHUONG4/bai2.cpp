// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>
using namespace std ;

int sum (int a[], int n) {
    if (n==0) 
    return 0;
    else 
    return a[n-1] + sum(a, n-1) ;
}
int main() {
    int n ;
    cin>>n;
    int a[n] ;
    for (int i =0;i<n;i++) {
        cin>>a[i] ;
    }
    cout<<sum(a, n) ;
}