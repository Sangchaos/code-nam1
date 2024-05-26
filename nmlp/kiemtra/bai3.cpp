// MSSV: 23110302 
// Ho và tên : Ðinh Van Sáng  
// 04/03/2005  
// MATH132401_23_1_36

#include <iostream>
#define max 100
using namespace std ;

struct hocphan {
	char mahocphan[5] ;
	char tenhocphan[30] ;
	int sotinchi;
};

void nhap (hocphan hp[], int &n) {
	cout<<"nhap so luong hoc phan: ";
	cin>>n;
	cin.ignore();
	for (int i=0 ;i<n ;i++) {
		cout<<"nhap hoc phan thu "<<i+1<<endl;
		cout<<"ma hoc phan: ";
		cin.getline( hp[i].mahocphan , max) ;
		cout<<"ten hoc phan: ";
		cin.getline( hp[i].tenhocphan, max) ;
		cout<<"so tin chi: " ;
		cin>>hp[i].sotinchi ;
		cin.ignore() ;
	}
}

void xuat(hocphan hp[] , int n) {
	for (int i=0 ;i<n ;i++) {
		cout<<hp[i].mahocphan<<endl;
		cout<<hp[i].tenhocphan<<endl ;
		cout<<hp[i].sotinchi<<endl;
	}
}

void sohocnhieutinchi (hocphan a[], int n) {
	int Max = a[0].sotinchi , vt =0;
	
	for (int i =1 ;i<n ;i++) {
		if (a[i].sotinchi>Max) {
			Max = a[i].sotinchi ;
			vt =i ;
		}
	}
	cout<<"Hoc phan "<<"["<<a[vt].tenhocphan<<"]"<<" co so tin chi lon nhat la: "<<Max<<endl ;
}
void demsohocphan (hocphan a[], int n) {
	char b[10] ="Nhap mon" ;
	int dem=0;
	for (int i= 0;i<n ;i++) {
		int k =0 ;
		for (int j=0;j<30 ;j++) {
			if (a[i].tenhocphan[j] == b[k] ) {
				k++ ;
				if (k==9) {
					dem++;
					break ;
				}
			}
		}
	}
	cout<<"so hoc phan co ten (Nhap mon) la: "<<dem ; 
}
int main() {
	hocphan hp[max] ;
	int n ;
	nhap(hp , n) ;
	//xuat(hp , n) ;
	sohocnhieutinchi(hp , n) ;
	demsohocphan(hp , n) ;
}
