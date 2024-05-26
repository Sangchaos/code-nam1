#include<iostream> 
using namespace std ;

int giai_thua(int n) {
    int gt =1;
    for(int i=1; i<=n ;i++) {
        gt*=i;
    }
    return gt ;
}

int main() {
    int n ;
    cin>>n;
    int *arr = new int [n];
    for (int i=0; i< n;i++) {
        cin>>arr[i];
    }
    int tong =0;
    for (int i=0;i<n;i++) {
        tong += giai_thua(arr[i]) ;
    }
    cout<<tong;
    delete [] arr;
    return 0; 
}