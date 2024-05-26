#include <iostream>
#define max 100
using namespace std ;

struct nhanvien {
	char manhanvien[6] ;
	char hovaten[30] ;
	int age ;
};

void nhap (nhanvien nv[],int &n) {
	cout<<"nhap so luong nhan vien ";
	cin>>n ;
	cin.ignore();
	for (int i=0 ;i<n ;i++) {
		cout<<"nhan vien thu "<<i+1<<endl ;
		cout<<"nhap ma nhan vien: " ;
		cin.getline(nv[i].manhanvien, max) ;
		cout<<"nhap ho va ten: " ;
		cin.getline(nv[i].hovaten , max) ;
		cout<<"nhap tuoi: " ;
		cin>>nv[i].age ;
		cin.ignore() ;
	}
}

void nhanviennhotuoi (nhanvien nv[], int n) {
	int min = nv[0].age , vt =-1;
	for (int i =1;i<n ;i++) {
		if (nv[i].age <min) {
			min = nv[i].age ;
			vt =i ;
		}
	}
	cout<<"nhan vien ["<<nv[vt].hovaten<<"] co tuoi be nhat la "<<min<<endl ;
}

void ktraTHI (nhanvien nv[], int n) {
	char c[5] = "Thi " ; 
	int dem =0 ;
	for (int i=0 ;i<n;i++) {
		int k=0 ;
		for (int j=0 ;j<30 ;j++) {
			if (nv[i].hovaten[j]==c[k]) {
				k++ ;
				if (k==4) {
					dem++ ;
					break ;
				}
			}
		}
	}
	cout<<"co "<<dem<<" nhan vien co chu Thi trong ten" <<endl;
}

int main() {
	nhanvien nv[max] ;
	int n ;
	nhap(nv , n) ;
	nhanviennhotuoi(nv, n) ;
	ktraTHI(nv ,n) ;
}
