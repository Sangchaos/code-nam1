#include<iostream> 
using namespace std ;
int main() {
    int n;
    cout<<"nhap n = ";
    cin>>n;
    int arr[n];
    cout<<"nhap phan tu ";
    for (int i =0; i<n;i++) {
        cin>>arr[i];
    }
    int max = arr[0];
    for (int i=1; i<n; i++) {
        arr[i]>max ;
        max =arr[i];
    }
    cout<<i
}