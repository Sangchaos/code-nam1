#include <iostream>
#include <math.h>
#define max 100

using namespace std ;

void nhap(int arr[][max], int &n, int &m) {
	
	cout <<"ma tran cap :";
	cin>>n;
	m=n ;
	cout<<"nhap gia tri cua mang " <<endl;
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			cin>>arr[i][j] ;
		}
	}
}

void xuat(int arr[][max], int n, int m ) {
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			cout<<arr[i][j]<<" " ;
		}
		cout<<endl;
	}
}

bool ktramatrantamgiactren (int arr[][max] ,int n) {

	for (int i=1;i<n;i++) {
		for (int j=0;j<i;j++) {
			if (arr[i][j]!=0)
			return false ;
		}
	
	}
	int dem=0;
	for (int i =0;i<n;i++) {
		if (arr[i][i]==0) {
			dem++;
		}
	}
	if (dem==n) 
	return false ;
	else 
	return true ;
}

bool ktramatrantamgiacduoi (int arr[][max] ,int n) {

	for (int i=0;i<n-1;i++) {
		for (int j=i+1;j<n;j++) {
			if (arr[i][j]!=0)
			return false ;
		}
	
	}
	int dem=0;
	for (int i =0;i<n;i++) {
		if (arr[i][i]==0) {
			dem++;
		}
	}
	if (dem==n) 
	return false ;
	else 
	return true ;
}
bool matrandonvi(int arr[][max],int n) {
	for (int i=0;i<n;i++) {
		if (arr[i][i]!=1) 
		return false ;
	}
	for (int i=0;i<n-1;i++) {
		for (int j=i+1;j<n;j++) {
			if (arr[i][j]!=0)
			return false ;
		}
	}
	
	for (int i=1;i<n;i++) {
		for (int j=0;j<i;j++) {
			if (arr[i][j]!=0)
			return false ;
		}
	
	}
		
	return true ;
}

bool matrandoixung (int arr[][max] ,int n) {
	for (int i=1;i<n;i++) {
		for (int j=0;j<i;j++) {
			if (arr[i][j]!=arr[j][i] ) {
				return false ;
			}
		}
	}
	return true ;
}

int tongphantutamgiactren(int arr[][max] ,int n) {
	int tong=0 ;
	for (int i =0;i<n;i++) {
		for (int j=i;j<n;j++) {
			tong+= arr[i][j] ;
		}
	}
	return tong ;
}

bool nto (int n) {
	if (n<2) {
		return false ;
	}
	for (int i=2;i<=sqrt(n);i++) {
		if (n%2==0) {
			return false ;
		}
	}
	return true ;
}

int tongntdongk (int arr[][max] , int n) {
	int k ,tong =0;
	cout<<"tong so nto hang thu k: ";
	cin>>k;
	for (int i=0;i<n;i++) {
		if (nto(arr[k][i])) {
			tong+= arr[k][i] ;
		}
	}
	if (tong ==0 ) 
		cout<<"khong co so nguyen to" ;
	else  
		return tong;
}
void chendayvaodongthuK (int arr[][max] ,int n, int m ) {
	int k ;
	cout<<"vi tri hang can chen: ";
	cin>>k ;
	if (k<0 || k>n) {
		cout<<"hang can chen khong ton tai ";
		return ;
	}
	else {
		for (int i =n-1;i>=k;i--) {
			for (int j=0;j<m;j++) {
				arr[i+1][j]=arr[i][j] ;
			}
		}
		n++;
		cout<<"nhap gia tri hang can chen: ";
		for (int i=0;i<m;i++) {
			cin>>arr[k][i];
		}
		xuat(arr, n ,m) ;
	}
}

void Xoahangvacotphantulonnhat(int arr[][max] ,int n ,int m) {
	int Max=arr[0][0] ;
	int nul ,col ;
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			if (arr[i][j] >Max) {
				Max = arr[i][j] ;
				nul=i; col =j ;
			}			
		}
	}
	cout<<"phan tu max la: "<<Max <<endl;
	for (int i=nul;i<n-1;i++) {
		for (int j=0;j<m ;j++) {
			arr[i][j] =arr[i+1][j];
		}
	}
	n--;
	
	for (int i=0;i<n;i++) {
		for (int j=col;j<m-1 ;j++) {
			arr[i][j] =arr[i][j+1];
		}
	}
	m--;
	xuat(arr ,n,m );
	
}

void hoanvi (int arr[][max] ,int n , int m ) {
	int tong ;
	int mangphu[n] , k=0;
	for (int i=0 ;i<n ;i++) {
		tong=0 ;
		for ( int j=0 ;j<m ;j++) {
			tong+= arr[i][j] ;
		}
		mangphu[k++] = tong;
 	}
 	for (int i =0;i<n;i++) {
 		cout<<mangphu[i]<<" "<<endl ;
	}
	for (int i=0;i<n-1;i++) {
		for (int j=i;j<n;j++) {
			if (mangphu[i]<mangphu[j]) {
				swap (mangphu[i], mangphu[j]) ;
				for (int q=0;q<m;q++) {
					swap (arr[i][q] , arr[j][q] );
				}
			}
		}
	}
	xuat(arr, n, m) ;
}
void thuchiencacyeucau(int arr[][max] ,int n, int m) {
	char require ;
	cout<<"chon cac yeu cau sau:"<<endl;
	cout<<"a .kiem tra ma tran tam giac tren" <<endl ;
	cout<<"b. kiem tra ma tran tam giac duoi"<<endl ;
	cout<<"c. kiem tra ma tran don vi"<<endl;
	cout<<"d. kiem tra ma tran doi xung qua cheo chinh"<<endl ;
	cout<<"e. tinh tong cac phan tu tam giac tren "<<endl;
	cout<<"f. tinh tong cac phan tu la so nguyen to tai dong thu k"<<endl;
	cout<<"g. chen day so thuc vao hang thu k" <<endl;
	cout<<"h. hoan vi cac dong theo tong giam dan"<<endl;
	cout<<"i. xoa hang va cot chua phan tu lon nhat"<<endl;
	cout<<"chon 0 de ket thuc "<<endl; 

	do {
		cout<<"nhap yeu cau:"; 
		cin>>require ;
		switch (require) {
			case 'a': if (ktramatrantamgiactren(arr ,n))
						cout<<"dung";
						else 
						cout<<"sai" ;
						break;
			case 'b': if (ktramatrantamgiacduoi(arr, n))
						cout<<"dung";
						else 
						cout<<"sai" ;
						break ;
			case 'c' : if(matrandonvi(arr , n) )
						cout<<"dung";
						else 
						cout<<"sai" ;
			 			break ;
			case 'd': if( matrandonvi(arr ,n) )
						cout<<"dung";
						else 
						cout<<"sai" ;
			 			break ;
			case 'e': cout<<tongphantutamgiactren(arr , n) ;break ;
			case 'f': cout<<tongntdongk(arr , n) ; break ;
			case 'g' : chendayvaodongthuK(arr, n ,m) ; break ;
			case 'h': hoanvi(arr ,n ,m); break ;
			case 'i' : Xoahangvacotphantulonnhat(arr, n ,m) ; break ;
			case '0': cout <<"tam biet!" ; break ; 
			default :cout<<"khong tong tai yeu cau. Vui long nhap lai tu a den i" ; break ; 
		}
		cout<<endl; 
	}
	while (require != '0') ;
	
}
int main () {
	int arr[max][max] ;
	int n, m;
	nhap (arr , n, m) ;
	thuchiencacyeucau(arr ,n ,m) ;
	return 0;
}
