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

bool nguyento(int n) {
    if (n<2)
    return false ;
    for (int i=2;i<=sqrt(n);i++) {
        if (n%2==0)
        return false ;
    }
    return true ;
}

int songuyentomax(int arr[] , int n) {
    int Ntmax=-1,vt=-1;
    for (int i =0;i<n;i++) {
        if (nguyento(arr[i])) {
            Ntmax=arr[i];
            vt=i;
            break ;
        }
    }
    for (int i=vt+1;i<n;i++) {
        if (nguyento(arr[i]) && arr[i]>Ntmax)
        Ntmax=arr[i] ;
    }

    return Ntmax ;
}

int main() {
    int arr[max] , n ;
    nhap (arr , n) ;
   int k =songuyentomax(arr, n) ;
    if (k==-1) {
        cout<<"khong co so nguyen to";
    }
    else 
    cout<<k;
}