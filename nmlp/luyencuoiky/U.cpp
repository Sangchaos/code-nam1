#include <iostream>
#include <climits>
#include<cmath>
using namespace std ;

void nhap(int a[], int &n ) {
	cin>>n;
	for (int i= 0 ;i<n ;i++) {
		cin>>a[i] ;
	}
}

int xuat (int a[], int n) {
	int min = INT_MIN;
	for (int i = 0;i<n ;i++) {
		int tong = 0;
		for (int j=i ; j<n ;j++) {
			tong+= a[j] ;
			if (tong >min)
			min = tong;
		}
	}
	return min ;
}


int main() {
	int a[100] , n ;
	nhap(a, n) ;
	cout<<xuat(a,n );
}
