
#include <iostream>
#include <math.h> 
#define max 100
using namespace std ;

void nhap (int arr[][max], int &n ,int &m) {
	cout <<"nhap so hang,cot ";
	cin>>n>>m;
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			cin>>arr[i][j];
		}
	}
}

void xuat(int arr[][max], int n ,int m) {
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			cout<<arr[i][j]<<" ";
		}
	cout<<endl;
	}
}
int Phantumin (int arr[][max], int n , int m) {
	int min =arr[0][0];
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			if (arr[i][j]<min) 
			min=arr[i][j];
		}
	}
	return min ;
}

int tongmang2chieu(int arr[][max], int n , int m){
	int tong=0;	
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			tong+= arr[i][j] ;
		}
	}
	return tong ;
}
int demsolaxuathien (int arr[][max], int n ,int m) {
	int x;
	cout<<"nhap x = " ;
	cin>>x; 
	int dem =0;
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			if (arr[i][j]==x) {
				dem++;
			}
		}
	}
	if (dem==0) {
		cout<<"phan tu X khong thuoc mang " ;
			 	}
	return dem ;
}
int demduong (int arr[][max] ,int n ,int  m) {
	int dem=0;
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			if (arr[i][j]>0) {
				dem++;
			}
		}
	}
	return dem ;
}

int tongkhongam(int arr[][max] ,int n , int m) {
	int tong=0;	
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			if (arr[i][j]>= 0)
			tong+= arr[i][j] ;
		}
	}
	return tong ;
}

void vitriphantuMax (int arr[][max], int n , int m ) {
	int Max =arr[0][0] , vitrihang=0 , vitricot=0 ;
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			if (arr[i][j]>Max) {
			Max=arr[i][j];
			vitrihang=i;
			vitricot=j;
			}
		}
	}
	cout<<"vi tri max = "<<vitrihang<<" "<<vitricot;
}
int dongtonglonnhat (int arr[][max] ,int n , int m) {
	int tongmax=0, vitri=0;
	for (int i=0;i<m;i++) {
		tongmax=arr[0][i];
	}
		for (int i=1;i<n;i++) {
		int tong=0; 		
			for (int j=0;j<m;j++) {
				tong+= arr[i][j] ;				
			}
			if (tong>tongmax) {
					tongmax=tong;
					vitri=i;	}
	}
	return vitri ;	
}

void tongcotbenhat(int arr[][max], int n ,int m) {
	int tongmin=0 , vitri =0;
	for (int i=0;i<n;i++) {
		tongmin+=arr[i][0] ;
	}
	
		for (int i=1;i<m;i++) {
		int tong=0 ; 		
			for ( int j=0;j<n;j++) {
				tong+= arr[j][i] ;
			}
			if (tong<tongmin ) {
				tongmin=tong;
				vitri=i ;}
		
		}
	cout<<"tong cot be nhat = "<<tongmin<<endl;
	cout<<"vi tri cot be nhat la: "<<vitri; 
}

void xoadongthuk(int arr[][max] ,int &n , int m) {
	int k;
	if (k>=0 and k<n) {
		cout<<"xoa dong thu k " ;
		cin>>k;
		for (int i=k;i<n-1;i++) {
			for (int j=0;j<m;j++) {																
					arr[i][j]=arr[i+1][j] ;
				}		
		}
		n--;
		xuat(arr ,n , m) ; 
	}
	else 
	cout<<"hang khong ton tai"; 
	
}

void xoacotthuH (int arr[][max], int n ,int m) {
	int h;
	cout<<"xoa cot thu h = ";
	cin>>h ;
	if (h >=0 and h<n) {
	for (int i=0;i<n;i++) {
		for (int j=h;j<m-1;j++) {		
				arr[i][j]=arr[i][j+1] ;
			}
	}
	m--;
	xuat(arr ,n , m) ;
	}
	else 
	cout<<"cot khong ton tai";
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

void Xoacotnhieusonto(int arr[][max] ,int n, int m) {
	int demmax=0, dem, vitri=-1;
	for (int i=0;i<m;i++) {
		dem=0;
		for (int j=0;j<n;j++) {
			if (nto(arr[j][i])) {
				dem++;}
			if (dem>demmax){
				demmax=dem;
				vitri=i;
			}
		}
	}
	if  (demmax !=0) {
		for (int i=0;i<n;i++) {
			for (int j=vitri;j<m;j++) {
				arr[i][j]=arr[i][j+1];
			}
		}
		m--;
		xuat(arr, n,m) ;
	}
	else cout<<"khong co so nguyen to" ; 
}
void xuattrenduoiduongcheochinh (int arr[][max] ,int n ,int  m) {
	int k;
	cout<<"nhap khoang cach duong cheo chinh: " ;
	cin>>k;
	for (int i=0 ;i<n ;i++) {
		for (int j =0; j<m ; j++) {
			if (k==i-j || k==j-i) {
				cout<<arr[i][j]<<" ";
			} 
			else 
				cout<<" ";
		}
		cout<<endl;
	}

}

void menu (int arr[][max] ,int n, int m) {
	cout<<"menu:"<<endl;
	cout<<"a. nhap ma tran"<< endl;
	cout<<"b. xuat ma tran"<< endl;
	cout<<"c. tim phan tu nho nhat"<< endl;
	cout<<"d. tong cac phan tu trong mang 2 chieu "<< endl;
	cout<<"e. dem so lan xuat hien cua phan tu x"<<endl;
	cout<<"f. dem so lan xuat hien cua cac so duong "<<endl;
	cout<<"g. tong cac phan tu khong am la"<<endl ;
	cout<<"h. tim vi tri phan tu lon nhat"<<endl;
	cout<<"i. tim dong co tong lon nhat dau tien"<<endl;
	cout<<"j. tim tong va tri tri cot nho nhat dau tien"<<endl;
	cout<<"k. xuat cac phan tu cach duong cheo chinh 1 khoang k"<<endl;
	cout<<"l. xoa dong thu k"<<endl;
	cout<<"m. xoa cot thu h"<<endl;
	cout<<"n. xoa cot co nhieu so nguyen to nhat dau tien"<<endl;
	cout<<"nhan 0 de ket thuc"<<endl;
	char require ;
	
	do {
	cout<<"nhap yeu cau: ";
	cin>>require;
		switch(require) {
			case 'a': nhap(arr,n,m); break;
			case 'b': xuat(arr, n, m) ;break ;
			case 'c': cout<<Phantumin(arr,n,m); break;
			case 'd': cout<<tongmang2chieu(arr,n, m) ; break;
			case 'e' : cout<<demsolaxuathien(arr ,n ,m) ;break;
			case 'f': cout<<demduong(arr, n ,m) ;break ;
			case 'g': cout<<tongkhongam(arr,n,m); break;
			case 'h': vitriphantuMax(arr, n, m) ; break ;
			case 'i': cout<<dongtonglonnhat(arr, n, m) ; break ;
			case 'j' : tongcotbenhat(arr, n, m) ; break ;
			case 'k': xuattrenduoiduongcheochinh(arr,n,m) ; break ;
			case 'l': xoadongthuk(arr, n ,m) ; break ;
			case 'm': xoacotthuH(arr, n, m); break ;
			case 'n': Xoacotnhieusonto(arr, n ,m) ; break ;
			case '0': cout<<"tam biet!" ;break ;
			default :					
					cout<<"khong co trong menu, vui long nhap lai tu a den n: " ;
						
							
		}
		cout<<endl;
	}
	while (require != '0' ) ;
	
}
int main () {
	int n ,m  ;
	int arr[max][max] ;
	nhap(arr , n ,m) ;
	menu(arr, n , m) ;
	return 0;
}
