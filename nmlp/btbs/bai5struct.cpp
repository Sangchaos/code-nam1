#include <iostream>
#include <math.h>
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

void nhap (ngay &s) {
	cin>>s.y ;
	cin>>s.m ;
	cin>>s.d ;
	cout<<endl ;
}
void xuat (ngay s) {
	if (ngayhople(s)){
		cout<<s.y<<"/"<<s.m<<"/"<<s.d;
	}
	cout<<endl;
	
}
int ngaytrongnam (ngay s ) {
	int tong = 0;
	for (int i= 1 ;i<s.m; i++) {
		tong+=day (i, s.y) ;
	}
	tong+= s.d ;
	return tong ;
}

int nam(int n) {
	if (ktranamnnhuan(n))
	return 366;
	else
	return 365 ;
}

int ngaytoigio (ngay s) {
	int tong=0 ;
	for (int i=1; i<s.y;i++) {
		tong+= nam(i) ;
	}
	tong+= ngaytrongnam(s);
	return tong;
	
}

void ngaysauk(ngay s) {
    int k;
    cin >> k;
    int n = ngaytrongnam(s) + k; 
    while (n > nam(s.y)) {
        n -= nam(s.y);
        s.y += 1;
    }

    int i = 1;
    while (n > day(i, s.y)) {
        n -= day(i, s.y);
        i++;
    }

    s.m = i;
    s.d = n;

    xuat(s);
}
void ngaytruock(ngay s) {
    int q, n, k;
    cin >> q;
    k = -q;
    n = ngaytrongnam(s) + k; 
    while (n <= 0) {
        s.y -= 1;
        n += nam(s.y);
    }

    int i = 1;
    while (n > day(i, s.y)) {
        n -= day(i, s.y);
        i++;
    }

    s.m = i;
    s.d = n;

    xuat(s);
}
int khoangcachngay(ngay s1, ngay s2) {
    int khoangcach = abs(ngaytrongnam(s2) - ngaytrongnam(s1));
    if (s1.y != s2.y) {
        for (int i = min(s1.y, s2.y) + 1; i < max(s1.y, s2.y); i++) {
            khoangcach += nam(i);
        }
    }
    return khoangcach;
}
int sosanhngay(ngay s1, ngay s2) {
    if (s1.y != s2.y) {
        return s1.y - s2.y;
    } else if (s1.m != s2.m) {
        return s1.m - s2.m;
    } else {
        return s1.d - s2.d;
    }
}

int main() {
	ngay s, x;
	nhap(s) ;
	nhap(x) ;
//	cout<<ngaytrongnam(s)<<endl ;
//	cout<<ngaytoigio(s)<<endl ;
//	ngaysauk(s) ;
//	ngaytruock(s) ;
	cout<<khoangcachngay(s,x) ;
}
