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

bool ktraXcothuocmang(int arr[] ,int n) {
    int x;
    cout<<"nhap x = ";
    cin>>x;
    for (int i=0; i<n; i++){ 
        if (arr[i]==x) {
            return true ;
            break ;
        }
    }
    return false ;
}
int main() 
{
    int arr[max] ,n ;
    nhap(arr  ,n ) ;
    
    if (ktraXcothuocmang(arr, n))
        cout<<"thuoc mang";
    else 
        cout<<"ko thuoc";
    return 0;
}
    


