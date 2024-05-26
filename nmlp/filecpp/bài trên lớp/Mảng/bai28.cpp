#include<iostream>
#include <cmath>
#define max 100

using namespace std ;
void nhap(float arr[], int &n) {
    cout<<"nhap n = " ;
    cin>>n;
    cout<<"nhap cac phan tu cua mang"<<endl;
    for (int i=0; i<n; i++){
        cin>>arr[i] ;
    }
    
}

float SoNguyenLonNhat (float arr[] ,int n) {
    float Max =arr[0] ;
    for (int i =0;i<n;i++) {
        if (arr[i]<Max) 
        Max = arr[i];
    }
    if (Max==(int)Max) 
    return Max; 
    else {
        if (Max >=0 )
        return int(Max) ;
        else
        return (int) Max-1;
    }
    
    
}

int main() {
    float arr[max] ;
    int n ;
    nhap(arr , n) ;
    cout<<SoNguyenLonNhat(arr, n) ;
    return 0;
}