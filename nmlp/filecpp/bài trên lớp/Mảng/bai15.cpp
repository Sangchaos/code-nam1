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

int giatrilonnhat(int arr[] ,int n) {
    int Max=arr[0];
    for (int i=1; i<n; i++){ 
        if (arr[i]>Max) {
            Max=arr[i];
        }
    }
    return Max ;
}

int main() {
    int arr[max] ,n ;
    nhap(arr ,n);
    cout<<giatrilonnhat(arr, n) ;
}

