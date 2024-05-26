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

bool ktra (int n) {
	if (n<2) 
	return false ;
	for (int i=2;i<=sqrt(n);i++) {
		if (n%i==0) {
			return false;
		}
	}
	return true ;
}

void xoa(int arr[], int &n) {
	int max1=0 ,max2=0;
	for (int i=0;i<n;i++) {
		if(ktra(arr[i])) {
			if (arr[i]>max1)
			max1=arr[i] ;
		}
	}
	int vt=0;
	for (int i=0;i<n;i++) {
		if(ktra(arr[i])) {
			if (arr[i]>max2 && arr[i]!= max1) {			
			max2=arr[i] ;
			vt=i;			
			}	
		}
	}
	for (int i=vt;i<n;i++) {
		arr[i]=arr[i+1] ;
	}
	n--;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}		
}

int main() {
	int n;
	int arr[max];
	nhap(arr, n) ;
	xoa(arr, n);
}



