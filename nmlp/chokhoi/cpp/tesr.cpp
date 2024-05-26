#include <iostream> 
using namespace std ;
int nhap (int arr[], int n) {
    for(int i=0; i<n;i++) {
        cin>>arr[i] ;
    }
}
int mangconmax(int arr[], int n) {
    int max=0;
    for(int i=0 ;i<n ;i++) {
        int tong =0;
        for(int j=i;j<n;j++) {
            tong+=arr[j];
            if (tong>max)
            max=tong;
        }
    }
    return max ;
}

int main() {
    int n;
    cout<<"nhap n = ";
    cin>>n;
    int arr[n];
    nhap(arr, n) ;
    cout<<mangconmax(arr , n) ;
    return 0;
}