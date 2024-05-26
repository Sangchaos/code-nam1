#include <iostream> 
using namespace std ;

void nhap (int arr[] , int x) {
    for (int i=0; i<x ; i++) {
        cin>>arr[i] ;
    }
}

void sosanh(int arr[] , int n , int arr2[] ,int m) {
   
    int dem=0;
    for (int j=0 ;j<m ;j++) {
        for (int i =0;i<n ;i++) {
            if (arr[i] ==arr2[j]) {
                dem++;
            }
        }
    }
    if (dem== n) {
        cout<<"thuoc";
    }
    else 
        cout<<"ko thuoc";
    
}
int main() {
    int arr[100] ,  arr2[100], m, n ;
    cout<<"nhap n = ";
    cin>>n;
    nhap(arr , n) ;
    cout<<"nhap m = ";
    cin>>m;
    nhap(arr2 , m) ;
    sosanh(arr , n ,arr2 , m);
    return 0;
}