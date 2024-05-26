#include <iostream> 
#define max 10
using namespace std ;

struct dathuc {
	int heso ;
	int mux;
};
void xuatdon (dathuc a) {
	cout<<a.heso<<"x^"<<a.mux ;
}

void nhap (dathuc a[], int &n ) {
	cout<<"nhap so phan tu cua 1 da thuc: ";
	cin>>n;
	for (int i=0 ;i<n;i++) {
		cin>>a[i].heso>>a[i].mux ;
	}
}

void xuat(dathuc a[], int n) { 
	for (int i=0 ;i<n-1;i++) {
		xuatdon(a[i]); cout<<" + ";		
	}
	xuatdon(a[n-1]) ;
}



void tong1dathuc (dathuc a[] ) {
	for (int i =0;i<n-1 ;i++) {
		
	}
}
int main() {
	dathuc a[max] ;
	int n;
	nhap(a, n) ;
	xuat(a, n) ;
}
