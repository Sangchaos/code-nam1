#include<iostream>
#define max 100
using namespace std ;
int main() {
    int n, i ;
    cout<<"nhap n = ";
    cin>>n;
    int arr[max];
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    int dem=0;
    for (i=0; i<=(float)n/2; i++){
        if (arr[i]!=arr[n-i-1]) {
        dem++;
        break ;
        }
    }
    if (dem==0) 
        cout<<"doi xung"; 
    else
        cout<<"ko doi xung";
    return 0;
    
    
}