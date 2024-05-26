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

int tichmax (int a[] , int n) {
	int tm =0 ;
	for (int i =0 ;i<n-1; i++) {
		for (int j=i+1 ;j<n ;j++) {
			int tich =0;
			tich = a[i] * a[j] ;
			if (tich> tm )
			tm =tich ;
		}
	}
	return tm ;
}

int main() {
	int a[Max] , n ;
	nhap(a, n) ;
	cout<<tichmax(a, n) ;
}
