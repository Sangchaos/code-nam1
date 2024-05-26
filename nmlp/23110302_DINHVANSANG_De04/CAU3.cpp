// MSSV: 23110302 
// Ho và tên : Ðinh Van Sáng  
// 04/03/2005  
// MATH132401_23_1_36

#include <iostream> 
#define max 100

using namespace std ;

struct sanpham{
	char masanpham[7] ;
	char tensanpham[40] ;
	int namsx;
	int dongia ;
};

void nhap (sanpham sp[], int &n) {
	cout<<"nhap so luong san pham: ";
	cin>>n;
	cin.ignore() ;
 	for (int i=0 ;i<n ;i++) {
		cout<<"San pham thu: "<<i+1<<endl; ;
		cout<<"nhap ma san pham: ";
		cin.getline(sp[i].masanpham, max) ;
		cout<<"nhap ten san pham: ";
		cin.getline(sp[i].tensanpham,max) ;
		cout<<"nhap nam san xuat: ";
		cin>>sp[i].namsx ;
		cout<<"nhap don gia: ";
		cin>>sp[i].dongia ;
		cin.ignore() ; 
		cout<<endl ;
	} 
	cout<<endl;
}

void sptruoc2020 (sanpham sp[], int n) {
	cout<<"B. Cac san pham truc nam 2020:" <<endl;;
	for (int i=0;i<n ;i++) {
		if (sp[i].namsx < 2020) {
			cout<<"Ma: "<<sp[i].masanpham<<endl ;
			cout<<"Ten: "<<sp[i].tensanpham<<endl;
			cout<<"Nam san xuat: "<<sp[i].namsx<<endl;
			cout<<"Gia tien: "<<sp[i].dongia<<endl ;
		}
		cout<<endl;
	}
}

void sanphamgiacao (sanpham sp[], int n) {
	int Max = sp[0].dongia, vt =0; ;
	for (int i=1 ;i<n ;i++) {
		if (sp[i].dongia > Max) {
			Max= sp[i].dongia ;
			vt =i ;
 		}
	}
	cout<<"C. San pham co gia cao nhat la: "<<endl ;
	cout<<"Ma: "<<sp[vt].masanpham<<endl ;
	cout<<"Ten: "<<sp[vt].tensanpham<<endl;
	cout<<"Nam san xuat: "<<sp[vt].namsx<<endl;
	cout<<"Gia tien: "<<sp[vt].dongia<<endl ;
}

void ktra (sanpham sp[], int n) {
	char c[9] = "ngan tay" ; 
	int dem =0 ;
	for (int i=0 ;i<n;i++) {
		int k=0 ;
		for (int j=0 ;j<40 ;j++) {
			if (sp[i].masanpham[j]==c[k]) {
				k++ ;
				if (k==8) {
					dem++ ;
					break ;
				}
			}
		}
	}
	cout<<"D. Co "<<dem<<"san pham co chu (ngan tay) trong ten" <<endl;
}
int main() {
	sanpham sp[max] ;
	int n ;
	nhap(sp ,n) ;
	sptruoc2020(sp ,n) ;
	sanphamgiacao(sp , n ) ;
	ktra(sp , n) ;
	return 0 ;
} 
