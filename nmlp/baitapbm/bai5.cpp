#include<iostream>
#define max 100
using namespace std ;

void nhap(int a[], int n) {
    for (int i=0;i<n;i++) {
        cin>>a[i] ;
    }
}

void amMax(int a[] , int n) {
    int k=-1 ;
    a[k] =-1000000000;

    for (int i=0;i<n;i++) {
        if (a[i]<0 && a[i] > a[k]) {
            k=i;
        }
    }
    cout<<k;
    
}

int main() {
    int n;
    cout<<"nhap n = ";
    cin>>n;
    int a[max];
    nhap(a ,n) ;
    amMax(a ,n) ;
   
    return 0;
}