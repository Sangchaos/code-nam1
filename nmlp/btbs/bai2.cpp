#include <iostream>
#include<math.h>
#define max 100
using namespace std;

bool ktra( int n) {
	if (n<2)
	return false ;
	for (int i=2;i<=sqrt(n); i++) {
		if(n%i==0)
		return false;
	}
	return true;
}

void nhap(int arr[], int &n) {
	cout<<"nhap n = ";
	cin>>n;
	for(int i= 0; i<n;i++) {
		cin>>arr[i] ;
	}
}

void find(int arr[] , int n) {
	int tong=0; 
	float tb=0;
	for (int i=0;i<n;i++) {
		tong+= arr[i]  ;
	}
	tb= (float) tong/n ;
	int min= abs(arr[0]-tb) , socantim=arr[0], find;
	
	for (int i=1; i<n;i++) {
		socantim=arr[i] ;
		arr[i] =abs(arr[i] -tb );
		if (arr[i]<min ) {
		min=arr[i] ;
		find=socantim;
		}
	}
	cout<<tb<<" "<<find;
}

void tham(int arr[], int n) {
	int find2, demmax=0;
	for (int i=0;i<n;i++) {
		int dem=0; 
		for (int j=1;j<=arr[i];j++) {
		if (arr[i] %j==0) {
			dem++; }
			if(dem>demmax) {
			find2=arr[i] ;
			demmax=dem;
			}
		}
	}
	cout<<find2<<" "<<demmax;
}

void xoa(int arr[] ,int n) {
	int dem=0, vt=0, find3;
	for (int i=n-1;i>=0;i--) {
		vt++;
		if (ktra(arr[i])) {
			dem++;
			if (dem==2) {
				find3=n-vt;
				break;
			}
			
		}
	}

	for (int i=find3;i<n-1;i++) {
		arr[i]=arr[i+1];
	}
	n--;
	for (int i=0;i<n;i++) {
		cout<<arr[i]<<" ";
	}
}
int main() {
	int n , arr[max] ;
	nhap(arr , n) ;
	//find(arr, n) ;
	//cout<<endl;
	tham(arr , n) ;
	//cout<<endl;
	//xoa (arr , n);
}
