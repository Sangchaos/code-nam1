#include <iostream>
#include <cmath>
#define max 100
using namespace std ;

void nhap(int a[], int &n) {
    cin>>n;
    for (int i=0; i<n ; i++) {
        cin>>a[i] ;
    }
}
bool nt (int n) {
    if (n< 2) 
    return false ;
    for (int i =2; i<=sqrt(n) ; i++) {
        if (n%i==0)
        return false ;
    }
    return true ;
}

int reduceArray (int a[],int &n) {
	int tong= 0,dem =0,vt =0;
	for (int i=0 ;i<n ;i++) {
		if (nt(a[i]) ) {
			tong+= a[i] ;
			for (int j= i;j<n ;j++) {
				a[j] =a[j+1] ; 
			}
			n--;
			i--; 
		}
	
		else {
			if (tong>0 ) {
				for (int j=n-1 ;j>=i ;j--) {
				a[j+1] =a[j] ; 
				}
				n++ ;
				a[i] =tong ;
				tong =0;
				vt =0; 
			}
		} 
	
}
if (tong> 0 ) {
	a[n] =tong ;
	n++ ;}
}

void xuat(int a[], int n) {
	for (int i=0;i<n ;i++) {
		cout<<a[i]<<" " ;
	}
}
int main() {
    int a[max] , n ;
    nhap(a, n) ;
  reduceArray(a, n); 
    xuat(a, n) ;
} 
