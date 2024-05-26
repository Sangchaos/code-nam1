#include<iostream>
#define max 100
using namespace std ;

void nhap(int arr[], int &n) {
	cout<<"nhap n = ";
	cin>>n;
	for (int i=0; i<n ;i++) {
		cin>>arr[i];
	}
}

void xuat(int arr[], int n) {
	int demmax=0, dem=1, vt=0, vtmax=0;
	for (int i=0 ;i<n-1; i++) {
		vt++;
		if (arr[i]<arr[i+1]) {
			dem++;
			if (dem>demmax){
		    demmax=dem;
			vtmax=vt;
		}
	}
		else {
			dem=1;
		}
	}
	for (int i=vtmax-demmax+1; i<(vtmax+1);i++) {
		cout<<arr[i]<<" ";
	}


}

int main() {
	int n;
	int arr[max];
	nhap(arr, n);
	xuat(arr, n);
	return 0;
}
