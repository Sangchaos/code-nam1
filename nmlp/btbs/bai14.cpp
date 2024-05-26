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

int sogiatrichantrongmang(int arr[] ,int n) {
    int dem=0;
    for (int i=0; i<n; i++){ 
        if (arr[i]%2==0) {
            dem++;
        }
    }
    return dem ;
}

int main() {
    int arr[max] ,n ;
    nhap(arr ,n);
    int dem = sogiatrichantrongmang(arr ,n) ;
    if (dem==0) 
    cout<<"ko ton tai so chan";
    else
    cout<<dem;
}

