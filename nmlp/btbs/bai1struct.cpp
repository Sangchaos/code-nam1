#include <iostream>

using namespace std;

struct phanso {
	int tu;
	int mau ;
};
void nhap(phanso &ps) {
	cin>>ps.tu ;
	cin>>ps.mau ;
}
void xuat (phanso tong){
	cout <<tong.tu<<"/"<<tong.mau;
} 
phanso tinhtong (phanso ps1, phanso ps2)
{
	phanso tong;
	tong.tu = ps1.tu *ps2.mau + ps2.tu*ps1.mau ;
	tong.mau = ps1.mau * ps2.mau ;
	return tong ;
}

phanso tinhhieu (phanso ps1, phanso ps2)
{
	phanso hieu;
	hieu.tu = ps1.tu *ps2.mau -ps2.tu*ps1.mau ;
	hieu.mau = ps1.mau * ps2.mau ;
	return hieu ;
}

void rutgon(phanso a) {
	int h = a.tu ;
	int b= a.mau ;
	int ucln ;
	while (h%b !=0) {
		int r= h%b ;
		h=b ;
		b=r;
	}
	ucln = b ;
	do {
		a.tu /= ucln ;
		a.mau /= ucln ;
	}
	while (a.tu%ucln == 0 and a.mau %ucln == 0) ;
		
	xuat(a) ;
	
}
phanso tichhaiphanso (phanso ps1, phanso ps2) {
	phanso tich ;
	tich.tu= ps1.tu * ps2.tu; 
	tich.mau = ps1.mau * ps2.mau ;
	return tich ;
}

bool kiemtraphansoam(phanso a) {
	if (a.tu * a.mau <0) {
		return true;
	}
	else 
	return false ; 
}
void sosanhhaiphanso (phanso a, phanso b) {
	phanso hieu=tinhhieu(a,b) ;
	if (kiemtraphansoam(hieu)) {
		cout<<"ps1 < ps2";
	}
	else 
	cout<<"ps1 >ps2" ;
}
int main() {
	phanso ps1, ps2;
	nhap(ps1);
	nhap (ps2) ;
	phanso sum=tinhtong(ps1,ps2);
	phanso hieu = tinhhieu(ps1, ps2) ;
	phanso tich = tichhaiphanso(ps1, ps2) ;
//	cout<<endl;
//	rutgon(sum) ;
//	rutgon(hieu) ;
//	rutgon(tich) ;
	if (kiemtraphansoam(ps1)){
		cout<<"day la phan so am" ;
	}
	else 
		cout <<"day khong phan la phan so am" ;
	cout<<endl;	
	sosanhhaiphanso(ps1, ps2) ;
}
