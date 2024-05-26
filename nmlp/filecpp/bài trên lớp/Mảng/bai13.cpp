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

int splanXxuathien(int arr[] ,int n) {
    int x, dem=0;
    cout<<"nhap x = ";
    cin>>x;
    for (int i=0; i<n; i++){ 
        if (arr[i]==x) {
           dem++;
        }
    }
    return dem ;
}

int main() {
    int arr[max] ,n ;
    nhap(arr ,n);
    int dem = splanXxuathien(arr ,n) ;
    if (dem==0) 
    cout<<"ko ton tai X";
    else
    cout<<dem;
}

