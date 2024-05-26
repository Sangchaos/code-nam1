#include<iostream>  
#define max 100
using namespace std;
void nhap (int arr[], int n)
{
    for (int i=0; i<n; i++) {
        cin>>arr[i] ;}
}
bool so_nguyen_to (int snt) {
    if (snt<2)
    return false ;
    for (int i =2; i<(snt); i++) {
        if (snt%i==0) 
        return false;
    }  
    return true ;
}
int xuat (int arr[], int n) {
    int tong =0;
    for (int i=0; i<n; i++) {
        if ( so_nguyen_to(arr[i]) )
          tong+= arr[i] ;
    }
    return tong ;
}
int main() {
    int n;
    cout<<"nhap n = ";
    cin>>n;
    int arr[max];
    nhap (arr , n) ;
    cout<<"tong so nguyen to trong mang la: "<<xuat (arr, n)<<endl ;
   
    return 0;
}
