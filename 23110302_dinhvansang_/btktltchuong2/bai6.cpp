// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>

using namespace std;

void nhap (int a[], int b[], int c[], int &m, int &n) {
    cin>>m ;
    for (int i =0 ;i<m ;i++) {
        cin>>a[i] ;
    }
    cin>>n;
    for (int i =0 ;i< n;i++) {
        cin>>b[i] ;
    }
}

void kethop(int a[], int b[], int c[], int m, int n) {
    int q=0, p=0;
    for(int i =0 ;i< n+ m;i++) {
        if (i%2==0) 
        c[i] = a[q++] ;
        else 
        c[i] = b[p++] ;
    }
    for (int i=0 ;i< m+n ;i++) {
        cout<<c[i] <<" " ;
    }
}

int main() {
    int a[100], b[100], c[200] , m,n ;
    nhap(a, b, c, m,n) ;
    kethop(a, b, c, m, n) ;
}