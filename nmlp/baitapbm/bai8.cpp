#include <iostream>
using namespace std;

void nhap(int arr[], int &n) {
    cout<<"nhap n = ";
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>arr[i] ;
    }
}

void chen(int arr[], int &n , int x ) {
    int max = arr[0] , vt=0;
    for (int i =1;i<n ;i++) {
        if (arr[i]>max) {
            max = arr[i] ;
            vt=i; }
    }
    for (int i=n-1; i>=vt;i--) {
        arr[i+1] =arr[i] ;
    }
    n++;
    arr[vt+1] =x;
    for (int i=0;i<n ;i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n,x ;
    int arr[100] ;
    nhap(arr, n) ;
    cout<<"chen: ";
    cin>>x;
    chen(arr, n ,x) ;
    return 0;
}