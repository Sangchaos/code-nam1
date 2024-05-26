#include<iostream>
#include <cmath>
#define max 100

using namespace std ;
void nhap(int arr[], int &n) {
    cout<<"nhap n = " ;
    cin>>n;
    cout<<"nhap cac phan tu cua mang"<<endl;
    for (int i=0; i<n; i++){
        cin>>arr[i] ;
    }
}

bool nguyento(int n) {
    if (n<2)
    return false ;
    for (int i=2;i<=sqrt(n);i++) {
        if (n%2==0)
        return false ;
    }
    return true ;
}

int tongcacsonguyentocuamang(int arr[] , int n) {
    int tong =0 ;
    for (int i=0; i<n; i++){
        if (nguyento(arr[i]))
        tong+=arr[i];
    }
    return tong;
}

int main() {
    int arr[max] ,n ;
    nhap(arr, n) ;
    cout<<tongcacsonguyentocuamang(arr, n) ;
    return 0;
}