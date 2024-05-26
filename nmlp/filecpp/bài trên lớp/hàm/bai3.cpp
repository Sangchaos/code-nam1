#include<iostream>
#include <climits>
using namespace std ;
void nhap (int arr[], int n) 
{
    for (int i=0; i<n;i++) {
       
        cin>>arr[i];
    }
}
bool ktra (int snt) {
    if (snt<2) 
    return false ;
 
    for (int i=2; i<snt; i++) {
        if (snt%i==0) {
            return false ;
        }
    }
    return true ;
}

int xuat (int arr[] , int n) {
        int min= INT_MAX ;
    for (int i=0; i<n; i++) {
        if (ktra(arr[i])&& arr[i]< min)
        {   
           min= arr[i];
        }
        
    }
    if (min==INT_MAX) 
    return 0;
    else 
    return min;
}
int main() {
    int n;
    cout<<"nhap n = ";
    cin>>n;
    int arr[n];
    nhap (arr , n);
    int min =xuat(arr, n);
    cout<<min;
    
}