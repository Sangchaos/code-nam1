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

bool chinhphuong(int n) {
    if (sqrt(n)==(int) sqrt(n))
    return true ;
    else
    return false ;
}

int chinhphuongmin(int arr[] , int n) {
    int cpmin =-1,vt=-1;
    for (int i =0;i<n;i++) {
        if (chinhphuong(arr[i])) {
            cpmin =arr[i];
            vt=i;
            break ;
        }
    }
    for (int i=vt+1;i<n;i++) {
        if (chinhphuong(arr[i]) && arr[i]<cpmin)
            cpmin = arr[i] ;
    }

    return cpmin ;
}

int main() {
    int arr[max] , n ;
    nhap (arr , n) ;
    int k =chinhphuongmin(arr, n);
    if (k==-1) 
    cout<<"khong co so chinh phuong" ;
    else
    cout<<"so chinh phuong min: "<<k;

}