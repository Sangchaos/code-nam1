#include <iostream> 
#define max 100
using namespace std ;

void nhap(int arr[] , int &n) {
	cout<<"nhap n = ";
	cin>>n;
	for (int i = 0; i<n; i++) {
		cin>>arr[i] ;
	}
}

void conmax (int arr[] ,int n) {
	int dem=1 ,demmax=0 ,vt =0, vtmax=0 ;
	for (int i =0;i<n-1;i++) {
		vt++;
		if (arr[i] < arr[i+1]) {
			dem++;
			if (dem>demmax) {
				vtmax =vt;
				demmax=dem ;
			}
		}
		else 
		dem =1;
	}
	cout<<demmax<<" "<<vtmax<<endl;
	for (int i=vtmax-demmax+1 ;i<vtmax+1 ;i++) {
		cout<<arr[i]<<" ";
	}
}

int main() {
	int n; 
	int arr[max] ;
	nhap(arr , n );
	conmax(arr , n) ;
}

