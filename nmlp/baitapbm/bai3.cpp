#include <iostream>
using namespace std ;

void nhap(int arr[] , int n) {
    for (int i=0; i<n;i++) {
        cin>>arr[i];
    }
}

int xoa(int arr[] , int &n , int k) {
    if (k<0 || k>=n) 
    return 0;
    for (int i=k; i< n ; i++) {
        arr[i] = arr[i+1] ;
    }
    n--;
    return 1;
}

int main () {
    int n, k ;
    cin>>n>>k;
    int arr[n] ;
    nhap(arr , n);
    if (xoa(arr , n , k) ) {
    for (int i=0; i<n;i++) {
        
        cout<<arr[i]<<" ";
    }
    }
    return 0;
}