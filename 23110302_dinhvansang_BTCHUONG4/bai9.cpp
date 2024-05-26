// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>

using namespace std ;

int ucln(int a, int b) {
    while (b!=0)
    {
        int r= a%b;
        a=b ;
        b=r ;
    }
    return a ;
    
}
int ucln1mang(int a[], int n) {
    if (n==1) 
    return ucln(a[0], a[1]) ;
    else 
    return ucln(a[n-1], ucln1mang(a,n-1)) ;
}


int main() {
    int n; cin>>n;
    int a[n] ;
    for (int i=0 ;i<n;i++) {
        cin>>a[i] ;
    }
    cout<<ucln1mang(a, n) ;
  
}