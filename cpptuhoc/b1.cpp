#include <iostream>

#define Max 100 

using namespace std ;

void nhap (int a[] , int &n) {
    cin>>n;
    for (int i =0;i<n ;i++) {
        cin>>a[i] ;
    }
}

void soft (int a[], int &n) {
    for (int i =0 ;i< n-1 ;i++) {
        for(int j =i+1 ; j< n; j++) {
            if ( a[i] <a[j])
            swap(a[i] , a[j]) ;
        }  
    }
}
int solonthuk (int a[] , int n) {
    int k ; cin>> k; 
    int max = a[0] , dem=1;
    for (int i =1 ;i< n;i++) {
        if (a[i]< max) {
            max = a[i] ;
            dem++ ;
            if (dem == k)
            return max ;
        } 
    }
}

int main() {
    int n , a[Max] ;
    nhap(a, n) ;
    soft(a, n) ;
    cout<<solonthuk (a, n);
}