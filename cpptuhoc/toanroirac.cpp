#include <iostream>

using namespace std ;

int noiva ( int a, int b) {
    if (a==1 && b==1) {
        return 1;
    }
    else 
    return 0;
}
int noihoac (int a, int b ) {
    if (a==0 && b==0) 
    return 0;
    else 
    return 1 ;
}
int phudinh(int a) {
    if (a==0 )
    return 1;
    if (a==1)
    return 0; 
}

int loaitru (int a, int b) {
    if (a==b) {
        return 0 ;
    }
    else return 1 ;
}
int keotheo (int a, int b) {
    if (a==1 && b== 0) 
    return 0;
    else
    return 1 ;
}

int haichieu( int a , int b) {
    if (a==b) {
        return 1;
    }
    else 
    return 0 ;
}

void nhap (int a[], int b[] ,int c[]) {
    for (int i=0 ;i<8 ;i++) {
        cin>>a[i]>>b[i]>>c[i];
    }
}

void xuat (int a[] , int b[], int c[]) {
    cout<<'a'<<"\t" <<'b'<<"\t" <<'c'<<"\t" <<'^'<<"\t" <<'v'<<"\t" <<"-->" <<endl;
    for (int i =0;i<8 ;i++) {
        cout<<a[i]<<"\t"<<b[i]<<"\t" <<c[i]<<"\t"<<noiva(a[i], b[i])<<"\t"<<noihoac(a[i], b[i]) <<"\t" << keotheo(a[i], b[i]) ;
        cout<<endl ;
    }
}

void xuat1 (int a[] , int b[], int c[]) {
    cout<<'p'<<"\t" <<'q'<<"\t" <<'r'<<"\t"<<" p-->q ( (q-->r) --> (p-->r))"<<endl;
    for (int i =0;i<8 ;i++) {
        int m = keotheo(a[i], b[i]) , n = keotheo(b[i], c[i]) , p = keotheo(a[i], c[i]) , q = keotheo(n ,p) , e = keotheo(m, q) ;
        cout<<a[i]<<"\t"<<b[i]<<"\t" <<c[i]<<"\t"<<e;
        cout<<endl ;
    }
}
int main () {
    int a[8], b[8] , c[8];
    nhap(a, b,c) ;
    xuat1( a, b,c ) ;
    
}