#include <iostream>
using namespace std ;

void nhap(int arr[] , int n) {
    for (int i=0; i<n;i++) {
        cin>>arr[i];
    }
}

void xoa (int arr[] , int &n) {
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n;j++) {
            if (arr[i]==arr[j]) {
                for (int k =j; k<n-1; k++) {
                    arr[k] =arr[k+1];
                }
                n--;
                j--;
            }
            
        }
    }
}
int main () {
    int n ;
    cin>>n;
    int arr[n] ;
    nhap(arr, n);
    xoa(arr , n) ;
        for (int i=0; i<n; i++) {
            cout<<arr[i]<<" ";
        }
    
}
