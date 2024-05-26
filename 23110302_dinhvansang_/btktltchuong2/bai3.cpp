// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>
#include <conio.h> 
using namespace std ;

void nhap(int a[], int &n ,int &x ) {
    cin>>n ;
    for (int i =0 ;i< n ;i++) {
        cin>>a[i];
    }
    cin>>x ;
}
void out(int a[], int n ) {
    for (int i =0 ;i<n ;i++) {
        cout<<a[i]<<" " ;
    }
    cout<<endl; 
}

int timkiem(int a[], int n, int x) {
    a[n] = x ;
    n++ ;
    int i =0 ;
    while(a[i] != x) {
        i++ ;
    }
    if (i < n) 
    return i ;
    else 
    return -1 ;
}

void xoa (int a[], int n, int x) {
    int vt= timkiem(a,n ,x) ;
    for (int i= vt ;i<n ;i++) {
        a[i]=a[i+1] ;
    }
    n-- ;
    out(a, n) ;
}

void them(int a[], int n, int x) {
    int vt =(a, n, x) ; 
    int k; cin>>k ;
    for (int i =n-1 ;i>= vt;i--) {
        a[i+1] =a[i] ;
    }
    n++ ;
    a[vt] = k;
    out(a, n) ;
}
void replace(int a[], int n , int x) {
    int k ; cin>> k;
    int vt = timkiem(a,n ,x) ;
    a[vt] = k ;
    out(a, n) ; 
}

void menu (int a[], int n , int x) {
    cout<<"1. tim kiem"<<endl ;
    cout<<"2. chen"<<endl;
    cout<<"3. xoa"<<endl;
    cout<<"4. thay the"<<endl;
    int s; 
        cin>>s ;
        switch (s) {
            case 1: cout<<timkiem(a, n, x)<<endl ; break ;
            case 2: them(a, n, x) ; break ;
            case 3 : xoa(a, n, x) ; break ;
            case 4 : replace(a, n, x) ; break ;
        }
    
    
}
int main() {
    int a[100], n , x;
    nhap(a,n ,x) ;
    menu(a, n, x) ;
}
