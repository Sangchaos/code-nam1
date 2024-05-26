// MSSV: 23110302 
// Ho v� t�n : �inh Van S�ng  
// 04/03/2005  


#include <iostream>
#include <string.h>
#include <fstream>

using namespace std ;

struct sv {
	char MSHS[6] ;
	char hoten[31] ;
	char ngaysinh[15] ;
    char diachi[51];
	char gioitinh[4] ;
	float dtb ;
};

void nhaphocsinh (sv &a) {
		cin.getline(a.MSHS, 100) ;
        cin.getline(a.hoten, 100) ;
        cin.getline(a.ngaysinh, 15) ;
        cin.getline(a.diachi,100) ;
		cin.getline(a.gioitinh, 100) ;
        cin>> a.dtb ;
        cin.ignore();
}

void xuathocsinh(sv a) {
		cout<<a.MSHS<<endl;
		cout<<a.hoten<<endl;
	    cout<<a.ngaysinh<<endl ;
        cout<<a.diachi<<endl;
		cout<<a.gioitinh<<endl ;
		cout<<a.dtb<<endl;
}
void nhap (sv a[], int &n, ofstream &out ) {
    out.open ("D:\\nhapxuatfile\\guivao.txt") ;
	cout<<"nhap so luong hoc sinh: "; cin>>n;
	cin.ignore() ;
	for (int i= 0;i<n;i++) {
		nhaphocsinh(a[i]) ;
	}
    for (int i =0 ; i<n ;i++) {
        out<<a[i].MSHS<<endl;
		out<<a[i].hoten<<endl;
        out<<a[i].ngaysinh<<endl;
        out<<a[i].diachi<<endl;
		out<<a[i].gioitinh<<endl ;
		out<<a[i].dtb<<endl;
    }
    out.close() ;
}
void docfile(sv a[], int n, ifstream &in) {
    in.open("D:\\nhapxuatfile\\guivao.txt") ;
	for (int i=0 ; i<n ; i++) {
		in.getline(a[i].MSHS, 100) ;
        in.getline(a[i].hoten, 100) ;
        in.getline(a[i].ngaysinh, 15) ;
        in.getline(a[i].diachi,100) ;
		in.getline(a[i].gioitinh, 100) ;
        in>> a[i].dtb ;
        in.ignore();
	}
    in.close() ;
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
    ofstream out, output ;
    nhap(a , n, out) ;
    ifstream in ;
    docfile(a, n, in) ;
    output.open("D:\\nhapxuatfile\\bai.txt") ;
    output<<"so hoc sinh co diem trung binh lon hon 5: "<<lonhon5dtb(a, n) ;
    output.close() ;
}
