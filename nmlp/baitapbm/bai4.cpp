#include<iostream>
using namespace std ;

void nhap(int arr[] , int n) {
    for (int i=0; i<n;i++) {
        cin>>arr[i];
    }
}

void max(int arr[] , int n) {
    int max= arr[0], k=1 ;
    for (int i=1; i<n;i++) {
        if (arr[i] >max ) {
        max=arr[i] ;
        }
    }
    int max2=arr[0] ;
    for (int i=1; i<n;i++) {
        if (arr[i] >max2 && arr[i] != max) {
        max2=arr[i] ;
        }
    }
   for (int i=0; i<n; i++) {
        if (arr[i] == max2) {
            cout<<"chi so phan tu lon thu2 dau tien la: "<<i;
            break ;
        }
   }

}

int main() {
    int n;
    cout<<"nhap n = ";
    cin>>n;
    int arr[n] ;
    nhap(arr , n) ;
    max(arr, n);
    return 0;
}