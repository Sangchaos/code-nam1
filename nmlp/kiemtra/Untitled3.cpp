#include <iostream>
#include <string.h>
using namespace std ;

struct nv {
	char msnv[10] ;
	char ten[50] ;
	float luong ;
};

void nhapnv (nv &a) {
	cin.getline(a.msnv, 10) ;
	cin.getline(a.ten, 50) ;
	cin>>a.luong;
	cin.ignore();
}
void xuatnv (nv &a) {
	cout<<a.msnv<<"-"<<a.ten<<"-"<<a.luong<<endl;
}
void nhap (nv a[], int &n) {
	cin>>n ;
	cin.ignore() ;
	for (int i=0 ;i<n ;i++) {
		nhapnv(a[i]) ;
	}
}

void xuat( nv a[], int n) {
    if (n == 0) {
        cout << "Khong co nhan vien nao trong danh sach." << endl;
        return;
    }
	float max1 = a[0].luong ;
    int max2= strlen(a[0].ten) ,vt1=0,vt2=0;
    for (int i=0;i<n ;i++) {
    	if (a[i].luong > max1)
    	{
    		max1 = a[i].luong ;
    		vt1=i;
		}
	}
	for (int i=0 ;i<n;i++) {
		if( strlen(a[i].ten)>max2) {
			max2= strlen(a[i].ten);
			vt2= i;
		}
	} 
    if (vt1==vt2) {
    	xuatnv(a[vt1]) ;
    	for (int i=0;i<n ;i++) {
    		if (a[i].luong==max1 && strlen(a[i].ten) && i != vt1) {
    			xuatnv(a[i]) ;
			}
		}
	}
	else 
	cout<<"khong co" ;
}


int main() {
	nv a[100] ;
	int n ;
	nhap(a, n) ;
	xuat(a, n) ;
	
}
/*5
001
dinh va
20009
002
khoi
12
003
viet ho
1000
004
chau kim luong
200000
005
chau luong kim
200000
*/
