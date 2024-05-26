#include<iostream>
#include<math.h>
#include<climits>
using namespace std;
void nhap (int arr[], int n)
{
    for (int i=0; i<n; i++) {
    cin>>arr[i] ;}
}
bool ktra (int scp){
    if (sqrt(scp)-(int)sqrt(scp)!=0) {
        return false ;
    }
    return true ;

}
int xuat( int arr[], int n) {
    int tong= 0;
    for(int i=0 ; i<n; i++){
        if (ktra(arr[i])) 
        tong+= arr[i];
    }
    return tong ;
}

int xuat2 ( int arr[], int n) {
    int min = INT_MAX ;
    for(int i=0 ; i<n; i++){
        if (ktra(arr[i]) && arr[i] <min ) 
        min =arr[i];
    }
    return min ;
}

int main() {
    int n;
    cout<<"nhap n = ";
    cin>>n;
    int arr[n]; 
    nhap(arr , n) ;
    cout<<"tong so chinh phuong trong mang: "<<xuat(arr , n)<<endl;
    int min =xuat2(arr , n) ;
    if (min == INT_MAX)
        cout<< 0;
    else 
        cout<<"so chinh phuong be nhat trong mang: "<<min;

}