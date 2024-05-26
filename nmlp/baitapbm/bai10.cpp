#include <iostream>
#include <math.h>
using namespace std ;

bool ktra(int x) {
    if (x<2) {
        return false ;
    }
    for (int i =2; i<= sqrt(x) ;i++) {
        if (x%i==0) 
        return false;
    }
    return true ;
}

void nhap(int arr[] , int &n) {
    cout<<"nhap n = ";
    cin>>n;
    for (int i =0 ;i<n;i++) {
        cin>>arr[i] ;
    }
}

void chuyen(int arr[] , int &n , int arr2[] , int &m) {
    int vt =0;
    for (int i =0; i<n ;i++) {
        if (ktra(arr[i])) {
            arr2[vt] =arr[i] ;
            vt++;
            continue ;
        }
        arr[i -vt] =arr[i];
    }
    m=vt ;
    n=n-vt;

    
    for (int i =0; i<n ;i++) {
        cout<<arr[i]<<" ";
       
    }
    cout<<endl;
    for (int i=0 ;i< m;i++) {
        cout<<arr2[i]<<" ";
        
    }
}

int main() {
    int arr[100] , arr2[100] , n , m;
    nhap(arr , n) ;
    chuyen(arr ,n ,arr2 , m ) ;
    return 0;
}