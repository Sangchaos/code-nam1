#include <iostream>
using namespace std;

void nhap(int arr[] , int n) {
    for (int i=0; i<n;i++) {
        cin>>arr[i];
    }
}

bool ktra(int arr[] , int n){
    for (int i=0;i<=n/2 ;i++) {
        if (arr[i] == arr[n-i-1]) {
            return true;
        }
        return false ;
    }
}

void xuat(int arr[] , int n ) {
    
        if (ktra(arr ,n)) 
        cout<<"dung";
        else 
        cout<<"sai";
    
}

int main() {
    int n;
    cin>>n;
    int arr[n] ;
    nhap (arr, n) ;
    xuat (arr , n) ;
    return 0;
}