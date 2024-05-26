#include <iostream>

using namespace std ;

int a[100] , n , chen ;

void nhap() {
    for (int i =0 ;i<n ;i++) {
        cin>>a[i] ;
    }
}

void softgiam() {
    for (int i =0 ;i<n-1 ;i++) {
        for (int j =i+1 ;j<n ; j++) {
            if (a[i]< a[j]) {
                swap(a[i], a[j]) ;
            }
        }
    }
}

void xuat() {
    for (int  i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main() {
    cin>>n;
    nhap() ;
    softgiam();
    xuat();
    cin>> chen;
    int vt=-1; 
    for (int i =0 ;i< n;i++) {
        if (chen > a[i]) {
            vt =i ;
            break ;

        }
    }
    for (int i =n-1 ;i>=vt;i--) {
        a[i+1] = a[i] ;
    }
    a[vt] = chen ;
    n++ ;
    xuat() ;
    
}