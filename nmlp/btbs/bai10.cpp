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

int vitridautiencogiatrichan(int arr[] ,int n) {
    int vt=-1;
    for (int i=0; i<n; i++){ 
        if (arr[i]%2==0) {
            vt=i ;
            break ;
        }
    }
    return vt ;
}

int main() {
    int arr[max] ,n ;
    nhap(arr ,n);
    int vt = vitridautiencogiatrichan(arr ,n) ;
    if (vt==-1) 
    cout<<"ko ton tai so chan";
    else
    cout<<vt;
}

