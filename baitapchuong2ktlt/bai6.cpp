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
   int i=0,j=0,k=0;
   while(i<m&& j<n){
    c[k++]=a[i++];
    c[k++]=b[j++];
   }
   while(i<m){
    c[k++]=a[i++];
   }
   while(j<n){
    c[k++]=b[j++];
   }
   for (int p =0 ;p< n+m ;p++) {
    cout<<c[p]<<" ";
   }
}

int main() {
    int a[100], b[100], c[200] , m,n ;
    nhap(a, b, c, m,n) ;
    kethop(a, b, c, m, n) ;
}