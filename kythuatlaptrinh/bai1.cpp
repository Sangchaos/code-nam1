// MSSV: 23110302 
// Ho và tên : Ðinh Van Sáng  
// 04/03/2005  


#include <iostream>
#include <string.h>
using namespace std ;
struct DATE {
	int d ;
	int m ;
	int y ;
} ;
struct sv {
	char MSHS[6] ;
	char hoten[31] ;
	DATE ngaysinh ;
    char diachi[51];
	char gioitinh[4] ;
	float dtb ;
};
void nhapdate (DATE &a) {
	cin>>a.d>>a.m>>a.y ;
}
void xuatdate (DATE a) {
	cout<<a.d<<"/"<<a.m<<"/"<<a.y<<endl;
}
void nhaphocsinh (sv &a) {
		cin.getline(a.MSHS, 100) ;
        cin.getline(a.hoten, 100) ;
		nhapdate(a.ngaysinh);
        cin.ignore();
        cin.getline(a.diachi,100) ;
		cin.getline(a.gioitinh, 100) ;
        cin>> a.dtb ;
        cin.ignore();
}

void xuathocsinh(sv a) {
		cout<<a.MSHS<<endl;
		cout<<a.hoten<<endl;
		xuatdate(a.ngaysinh) ;
        cout<<a.diachi<<endl;
		cout<<a.gioitinh<<endl ;
		cout<<a.dtb<<endl;
}
void nhap (sv a[], int &n) {
	cout<<"nhap so luong hoc sinh: "; cin>>n;
	cin.ignore() ;
	for (int i= 0;i<n;i++) {
		nhaphocsinh(a[i]) ;
	}
}
void xuat(sv a[], int n) {
	for (int i=0 ; i<n ; i++) {
		xuathocsinh(a[i]);
	}
}
int lonhon5dtb (sv a[], int n) {
    int dem =0;
    for(int i =0 ;i< n ;i++) {
        if (a[i].dtb >=5)
        dem++ ;
    }
   return dem ;
}
int main() {
    sv a[100] ;
    int n  ;
    nhap(a , n) ;
	cout<<endl;
    xuat(a, n) ;
    cout<<"so hoc sinh co diem trung binh lon hon 5: "<<lonhon5dtb(a, n) ;
}
