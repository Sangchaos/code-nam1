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

int tongcacphantucuamang(int arr[] , int n) {
    int tong =0 ;
    for (int i=0; i<n; i++){
        tong+=arr[i];
    }
    return tong;
}



int main() {
    int arr[max] ,n ;
    nhap(arr, n) ;
    cout<<tongcacphantucuamang(arr, n) ;
    return 0;
}