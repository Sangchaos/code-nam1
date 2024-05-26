#include <iostream>
#define max 100 
using namespace std ;
void nhap (int arr[] , int &n) {
	cin>>n ;
	for(int i= 0 ;i<n ;i++) {
		cin>>arr[i] ;
	}
}

int xuat (int arr[] ,int n) {
	int tong= 0, xuat ;
	for (int i =0 ;i<n ;i++) {
		tong+= arr[i] ;
		if (tong >= (i+1) *(i+1) )
			xuat = i+1;
	}
	return xuat ;
}
 
int main() {
	int arr[max] , n ;
	nhap (arr ,n) ;
	cout<<xuat(arr , n);
}
