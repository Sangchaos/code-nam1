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

int giatrilemin(int arr[], int n) {
    for (int i=0 ;i<n-1;i++) {
        for (int j =i;j<n;j++) {
            if (arr[i]>arr[j])
            swap (arr[i] ,arr[j]) ;
        }
    }
    int lemin;
    for (int i=0 ;i<n;i++) {
        if (arr[i]%2==1){
            lemin=arr[i] ;
            break ;
        }
    }
    return lemin ; 
    
}

int main() {
    int arr[max] ,n ;
    nhap(arr ,n);
    cout<<giatrilemin(arr, n) ;
    return 0;

}

