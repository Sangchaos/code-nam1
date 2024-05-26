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

int giatrichanmax(int arr[], int n) {
    for (int i=0 ;i<n-1;i++) {
        for (int j =i;j<n;j++) {
            if (arr[i]>arr[j])
            swap (arr[i] ,arr[j]) ;
        }
    }
    int chanmax;
    for (int i=n-1 ;i>=0;i--) {
        if (arr[i]%2==0){
            chanmax=arr[i] ;
            break ;
        }
    }
    return chanmax ; 
    
}

int main() {
    int arr[max] ,n ;
    nhap(arr ,n);
    cout<<giatrichanmax(arr, n) ;
    return 0;

}

