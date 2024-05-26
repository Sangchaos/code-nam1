#include <iostream>
#include  <cmath>
using namespace std ;

struct ngay{
	int d, m, y;
};


bool ktranamnnhuan(int n) {
	if (n%400 ==0 || n%4==0 && n%100 != 0)
	return true ;
	else 
	return false ;
}

int day (int month, int year) {
	switch (month) {
		case 1: case 3 : case 5: case 7: case 8: case 10: case 12: 
		return 31 ; break ;
		case 4 : case 6: case 9: case 11:
		return 30 ; break ;
		case 2: 
			if (ktranamnnhuan(year))
			return 29 ; 
			else 
			return 28;
			break ;
			
		
	}
}
bool ngayhople (ngay s) {
	if (s.m>= 1 && s.m<=12) {
		if (s.d >0 && s.d<= day(s.m, s.y)) 
		return true;
		else
		return false ;
	}
	else 
	return false ;
}
int ngaytrongnam (ngay s ) {
	int tong = 0;
	for (int i= 1 ;i<s.m; i++) {
		tong+=day (i, s.y) ;
	}
	tong+= s.d ;
	return tong ;
}
void nhap (ngay &s) {
	cin>>s.y ;
	cin>>s.m ;
	cin>>s.d ;
}
void xuat (ngay s) {
	if (ngayhople(s)){
		cout<<s.y<<"/"<<s.m<<"/"<<s.d;
	}
	cout<<endl;
	
}


int nam(int n) {
	if (ktranamnnhuan(n))
	return 366;
	else
	return 365 ;
}
void ngaysauk (ngay s) {
	int k ;
	cin>> k;
	int n = k+ s.d ;
	while (n > nam(s.y ) ) {
		n = n - nam(s.y) ;
		s.y+= 1;
	}
	
	while (n > day (s.m, s.y)) {
		n = n - day (s.m , s.y);
		s.m += 1 ;
		if ( s.m ==13) {
			s.m =1;
			s.y+=1 ;
		}
			
	}
	s.d = n ;
	xuat(s) ;
	
} 
void ngaytruock (ngay s) {
	int q,n, k;
	cin>> q;
	k =-q ;
	n = k+ s.d ;
	while (abs(n) > nam(s.y ) ) {
		n = n + nam(s.y) ;
		s.y-= 1;
	}
	
	while (abs(n) > day (s.m, s.y)) {
		n = n + day (s.m , s.y);
		s.m -= 1 ;
		if ( s.m ==0) {
			s.m =12;
			s.y-=1 ;
		}
			
	}
	s.d = n ;
	xuat(s) ;
	
} 

int main() {
	ngay s;
	nhap(s) ;
	if (ngayhople(s)== false ) {
		return 0 ;
	}
	xuat(s) ;
	//ngaysauk(s) ;
	ngaytruock(s) ;
}
