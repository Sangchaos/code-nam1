#include<iostream>
using namespace std ;
int main() {
    int n ;
    cout<<"nhap n = ";
    cin>>n;
    int arr[n];
    for (int i=0 ;i<n; i++) {
        cin>>arr[i];
    }
    int max = arr[0]; 
    int dem =0;
    for ( int i=1; i<n ; i++) {
        if (arr[i] > max) {
            max =arr[i] ;
            dem++;
        }
    }
    
    int max1=arr[dem] ;
    int tong1=0;
    for (int i=dem; i<n;i++) {
        tong1+=arr[i];
        if (tong1>arr[dem]) {
            max1=tong1;
        }
    }
    cout<<max1<<endl;

    int max2=arr[dem] ;
    int tong2=0;
    for (int i=0; i<=dem;i++) {
        tong2+=arr[i];
        if (tong2>arr[dem]) {
            max2=tong2;
        }
    }
    cout<<max2;
    
}