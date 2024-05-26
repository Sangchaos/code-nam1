#include <iostream>
#include <cmath>
using namespace std ;

void nhap (int &n) {
	
	do {
		cout<<"nhap so n = ";
		cin>>n;
	}
	while (n>-10 && n<10) ;
}

bool ktratinhchanlexenke (int n) {
	int a = abs(n) ;
	while (a>0) {
		if (a%10 %2 == 0 && a/10 %10 %2 == 0 || a%10 %2 == 1 && a/10 %10 %2 == 1) {
			return false ;
		}
	a=a/10 ;
	}
	return true ;
}

int main() {
	int n ;
	nhap(n) ;
	if (ktratinhchanlexenke(n)) {
		cout<<"dung" ;
	}
	else
	cout<<"sai" ;
}
