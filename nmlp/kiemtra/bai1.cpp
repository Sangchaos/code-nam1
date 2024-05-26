#include <iostream>

using namespace std ;

void nhap (int &n ) {
	cout<<"nhap so n: ";
	do {
		cin>>n;
	}
	while (n<99) ;
}

bool kiemtratinhchanle (int n) {
	int a= n , b=n/10;
	while (b>0) {		
		if (a%10 %2 ==0 && b%10 %2 ==0 || a%10 %2 !=0 && b%10 %2 !=0  ) {
			return false ;
		}
		a=a/10 ;
		b=b/10 ;
	}
	return true ;
}

int main() {
	int n ;
	nhap(n) ;
	if (kiemtratinhchanle(n)) 
	cout<<"dung" ;
	else 
	cout<<"sai";
	}

