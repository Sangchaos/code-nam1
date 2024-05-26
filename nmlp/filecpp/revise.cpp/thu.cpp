#include<iostream>
using namespace std;
void nhap (int arr[], int &n)
{
    cout<<"nhap n = " ;
    cin>>n;
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
void xuat (int arr[], int &n) {
    for (int i=0; i<n; i++) {
        if (so_nguyen_to(arr[i]))
        cout<<arr[i]<<" ";
    }
}
int main() {
    int n;
    int *arr = new int [n];
    nhap (arr , n) ;
    xuat (arr, n) ;
    delete[] arr;
    return 0;
}
