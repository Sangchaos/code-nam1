// MSSV: 23110302 
// Ho và tên : Ðinh Van Sáng  
// 04/03/2005  
// MATH132401_23_1_36

#include <iostream>
#define max 100
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std ;

void taomatran (int arr[][max] , int &m, int &n) {
	cout<<"nhap so hang va cot: ";
	cin>>m>>n;	 
	srand(time(NULL)) ;
	for (int i=0;i<m;i++) {
		for (int j=0;j<n;j++) {
			arr[i][j]= rand() %2001-1000  ;
		}
	}
}

void xuat (int arr[][max] ,int m, int n) {
	for (int i=0;i<m ;i++) {
		for (int j=0; j<n;j++) {
			cout<<arr[i][j]<<"\t" ;
		}
		cout<<endl ;
	}
	cout<<endl;
}
bool ktrachinhphuong (int n) {
	if (sqrt(n)==(int) sqrt(n)) {
		return true ;
	}
	else
	return false ;
}
int tinhtongchinhphuongcheophu (int arr[][max], int m ,int n) {
	int tong =0,i=0 ;
	while (i < n) {
		if (ktrachinhphuong(arr[i][m-1-i])) 
		tong+= arr[i][m-1-i] ;
		i++ ;
	}
	return tong;
}

void vitrinhonhatbien(int arr[][max], int m, int n) {
	int min = arr[0][0] ;
	int vthang =0 , vtcot= 0;
	for (int i=0;i<n ;i++) {
		if ((arr[0][i]) < min) {
		min =arr[0][i] ;
		vthang=0;
		vtcot= i ;
		}
	}
	for (int i=0;i<n ;i++) {
		if ((arr[m-1][i]) < min){
			min= arr[m-1][i] ;
			vthang= m-1;
			vtcot= i;
		}
		
	}
	for (int i=1;i<m-1 ;i++) {
		if ((arr[i][0]) < min ){		
			min = arr[i][0] ;
			vthang= i;
			vtcot= 0;
		}
	}
	for (int i=1;i<m-1 ;i++) {
		if ((arr[i][n-1])< min ) {
			min= arr[i][n-1] ;
			vthang=i ;
			vtcot= n-1 ;
		}
		
	}
	cout<<"c. vi tri so be nhat tren duong bien la: "<<endl;
	cout<<"hang: "<<vthang<<endl ;
	cout<<"cot: "<<vtcot<<endl;
	
}

void xoadongnhieuchannhat(int arr[][max], int m , int n) {
	cout<<"d. xoa dong nhieu so chan nhat dau tiem"<<endl;
	int demmax=0 , vtdong=0 ;
	for (int i=0;i<m ;i++){
		int dem=0;
		for (int j=0 ;j< n ;j++) {
			if (arr[i][j] % 2 ==0)
			dem++ ;
		}
		if (dem>demmax) {
			demmax=dem ;
			vtdong= i ;
		}
		
	}
	
	for (int i=vtdong ;i< m;i++) {
		for (int j=0 ;j< n;j++) {
			arr[i][j]=arr[i+1][j] ;
		}
	}
	m--;
	xuat(arr, m,n) ;
}
int main() {
	int arr[max][max], m, n ;
	taomatran(arr, m, n) ;
	cout<<"a. sinh ra ma tran"<<endl;
	xuat(arr, m, n) ;
	cout<<"b. tong so chinh phuong tren cheo phu la: "<<tinhtongchinhphuongcheophu(arr, m,n)<<endl ;
	vitrinhonhatbien(arr, m, n) ;
	xoadongnhieuchannhat(arr, m, n) ;
}

