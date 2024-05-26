#include <iostream>
using namespace std ;

int gtmax (int *p , int n) {
    int maxgt = p[0];
    for (int i =1; i<n; i++) {
        if (p[i]>maxgt)
            maxgt = p[i] ;
    }
    return maxgt ;
}

int main () {
    int n;
    cout<<"nhap n = ";
    cin>>n;
    int arr[n] ;
    for (int i =0; i<n;i++) {
        cin>>arr[i];
    }
    cout<< gtmax(arr, n) ;
}