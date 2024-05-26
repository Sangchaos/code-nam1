#include <iostream>
#include <math.h>
#define max 100
using namespace std ;

void nhap( int &x) {
	cout<<"nhap n = ";
	cin>>x;
	int n=x;
	int dem=0;
	int chuso=0;
	int a =n%10;
	n=n/10 ;
	while (n>0) {
		chuso++;
		if (n%10 >= a) {
			dem++;
		}
		n=n/10 ;
	}
	if (dem==chuso) {
		cout<<x<<" dung";
	}
}

int main() {
	int x;
	nhap(x);
}
