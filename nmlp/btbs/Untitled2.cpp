#include <iostream>
#include <math.h>
#define max 100
using namespace std ;

void nhap(int arr[], int &n) {
	cout<<"nhap n = ";
	cin>>n;
	for (int i=0; i<n ;i++) {
		cin>>arr[i];
	}
}



int tongle (int arr[] , int n ) {
	int tong=0 ;
	for (int i=0; i<n;i++) {
	
		if (arr[i]%2!=0 && (arr[i]>9 &&arr[i]<100)) {
			tong+= arr[i] ;
		}
	}
	return tong;
}
int main() {
	int n;
	int arr[max] ;
	nhap(arr , n) ;
	cout<<tongle(arr , n) ;
}
