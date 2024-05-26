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

float SoNguyeBeNhat (float arr[] ,int n) {
    float Min =arr[0] ;
    for (int i =0;i<n;i++) {
        if (arr[i]>Min) 
        Min = arr[i];
    }
    if (Min>=0) {
        if (Min == (int) Min) 
        return Min;
        else
        return (int) Min+1;
    }
    else {
        if (Min == (int) Min) 
        return Min ;
        else 
        return (int) Min ;
    }

}

int main() {
    float arr[max] ;
    int n ;
    nhap(arr , n) ;
    cout<<SoNguyeBeNhat(arr, n) ;
    return 0;
}