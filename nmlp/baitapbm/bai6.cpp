#include <iostream>
using namespace std ;

void nhap (int arr[] , int &n) {
    cout<<"nhap n = ";
    cin>>n;
    for (int i =0 ; i<n ;i++) {
        cin>>arr[i] ;
    }
}
int ktra(int arr[] ,int &n, int x) {
    for (int i=0 ;i<n;i++) {
        if (arr[i]==x)
        return x;
    }
}

void xoa(int arr[] , int &n , int x) { 
    int vt=0;
    for (int i=0; i<n ; i++) {
       if(arr[i]>=x) {
        arr[vt] =arr[i] ;
        vt++;
        } 
    }
    n=vt;       
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int n , x ;
    int arr[100] ;
    nhap(arr , n) ;
    cout<<"nhap xoa = ";
    cin>>x;
    xoa (arr , n, x) ;
    return 0;
}


 