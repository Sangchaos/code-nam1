#include<iostream>
#include <cmath>
#define max 100

using namespace std ;
void nhap(float arr[], int &n) {
    cout<<"nhap n = " ;
    cin>>n;
    cout<<"nhap cac phan tu cua mang"<<endl;
    for (int i=0; i<n; i++){
        cin>>arr[i] ;
    }
}

float GiaTriLechChuan(float arr[] , int n) {
	float av=0;
	for (int i=0;i<n ;i++) {
		av += arr[i] ;
	}
	av= av/n;
	float lechchuan=0;
	for (int i=0;i<n;i++) {
		lechchuan= (arr[i]- av) * (arr[i]-av) ;
	}
	lechchuan/= n;
	return lechchuan;
}

int main() {
	float arr[max] ;
	int n ;
	nhap(arr ,n ) ;
	float GTLC= GiaTriLechChuan(arr, n) ;
	cout<<GTLC;
}

