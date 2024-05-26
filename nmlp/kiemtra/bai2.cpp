#include <iostream>
#define max 100
#include <ctime>
#include <cstdlib>

using namespace std ;

void taomatran (int arr[][max] , int &n, int &m) {
	cout<<"nhap so hang va cot: ";
	cin>>n>>m;	 
	srand(time(NULL)) ;
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			arr[i][j]= rand() %201-1000  ;
		}
	}
}

void xuat (int arr[][max] ,int n, int m) {
	for (int i=0;i<n ;i++) {
		for (int j=0; j<m;j++) {
			cout<<arr[i][j]<<"\t" ;
		}
		cout<<endl ;
	}
}
void vitricogiatribang (int arr[][max] ,int n, int m) {
	int x,nul=-1, col=-1 ;
	cout<<"nhap x = ";
	cin>>x;
	for (int i = 0; i<n ;i++) {
		for (int j =0 ;j<m ;j++) {
			if (arr[i][j]==x) {
				nul=i ;
				col= j;
				break ;
			}
		}
	}
	if (nul==-1 || col ==-1) {
		cout<<"khong co vi tri x" ;
	}
	else {
		cout<<"vi tri phan tu bang x la "<<nul<<" "<<col ;
	}
}
void timcotcotongbenhat(int arr[][max], int n, int m) {
	int tongmin =0 ;
	for (int i=0;i<n;i++) {
		tongmin += arr[i][0] ;
	}
	for (int j=1;j<m;j++) {
		int tong = 0;
		for (int i=0 ;i<n;i++) {
			tong+= arr[i][j] ;
		}
		if (tong<tongmin) 
		tongmin =tong ;
	}
	cout<<"cot co gia tri be nhat la"<<tongmin ;
}
int tongbien (int arr[][max],int n , int m) {
	int tong = 0;
	for (int i=0;i<m;i++ ) {
		if (arr[0][i]%2==1)
		tong+= arr[0][i];
	}
	
	for (int i=0;i<m;i++ ) {
		if (arr[n-1][i]%2==1)
		tong+= arr[n-1][i];
	}
	for (int i=1;i<n-1;i++ ) {
		if (arr[i][0]%2==1)
		tong+= arr[i][0];
	}
	for (int i=1;i<n-1;i++ ) {
		if (arr[i][m-1]%2==1)
		tong+= arr[i][m-1];
	}
	return tong ;
} 
int main() {
	
	int arr[max][max] , n, m;
	taomatran(arr, n, m) ;
	xuat(arr, n ,m ) ;
//	cout<<endl ;
//	vitricogiatribang(arr, n, m) ;
//	timcotcotongbenhat(arr, n, m) ;
	cout<<tongbien(arr, n,m ) ;
	return 0 ;
}
