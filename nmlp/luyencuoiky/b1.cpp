#include <iostream>
const int Max =100 ;

using namespace std ;

void nhap (int a[] , int &n ) {
	cin>>n;
	for (int i= 0;i<n ;i++)
	{
		cin>>a[i] ;
	}
} 

int ktra (int a[], int n) {
	int dem =0 ;
	for (int i =0 ;i<n-1 ;i++ ) {
		if ( a[i]== a[i+1] && a[i] !=  a[i-1])
		dem++;
	}
	return dem ;
}

int main() {
	int a[Max] , n ;
	nhap(a, n) ;
	cout<<ktra(a, n) ;
}