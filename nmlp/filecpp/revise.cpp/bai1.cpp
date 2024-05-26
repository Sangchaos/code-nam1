#include<iostream> 
#define max 100
using namespace std ;

void nhap (int arr[] , int &n) {
	cout<<"nhap cac phan tu: ";
	int dem=0;
	for (int i=0; i<n;i++) {
		cin>>arr[i] ;
		dem++;
		if (arr[i]==0 ) 
			break ;	
	}
	n=dem;
}

void test(int arr[] , int &n) {
	int i;
	for (i=0;i<n;) {
		if (arr[i] < 0) 
		i++;
	}
	if (i==n-1)
	cout<<"toan so am";
}

int main() {
	int n=20, arr[max] ;
	nhap(arr , n) ;
	test(arr , n) ;
	return 0;
}
