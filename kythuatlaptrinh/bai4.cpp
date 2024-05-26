// MSSV: 23110302 
// Ho và tên : Ðinh Van Sáng  
// 04/03/2005  


#include <iostream>
#include <math.h>
using namespace std ;

struct ngay{
	int d, m, y;
};


bool ktranamnnhuan(int n) {
    if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0))
        return true;
    else
        return false;
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
	cin>>s.d ;
	cin>>s.m ;
	cin>>s.y ;
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

long long ngaytoigio (ngay s) {
	long long tong=0 ;
	for (int i=1; i<s.y;i++) {
		tong+= nam(i) ;
	}
	tong+= ngaytrongnam(s);
	return tong;	
}

int khoangcachngay(ngay a, ngay b) {
    if (ngayhople(a) && ngayhople(b))
    return abs(ngaytoigio(a) - ngaytoigio(b)) ;
}

int main() {
	ngay s, x ;
    cout<<"nhap ngay thu 1: ";
	nhap(s) ;
    cout<<"nhap ngay thu 2: ";
	nhap(x) ;
    cout<<"khoang cach giua 2 ngay la: ";
	cout<<khoangcachngay(s,x) ;
}
