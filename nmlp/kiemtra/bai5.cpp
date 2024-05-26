#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#define max 100

using namespace std ;

void taomatran (int arr[][max], int &m, int &n) {
	srand (time(0)) ;
	cout<<"nhap so hang va cot: " ;
	cin>>m>>n ;
	for (int i=0;i<m ;i++) {
		for (int j=0; j<n;j++) {
			arr[i][j] =rand() % 201-100 ;
		}
	}
}
void xuat (int arr[][max] ,int m, int n) {
	for (int i=0;i<m ;i++) {
		for (int j=0 ;j<n ;j++) {
			cout<<arr[i][j]<<"\t" ;
		}
		cout<<endl;
	}
	cout<<endl;
}
void timvitrichan(int arr[][max], int m, int n) {
	int vthang=-1 , vtcot =-1;
	for (int i =0;i< m;i++) {
		for (int j =0;j< n;j++) {
			if ( arr[i][j] %2==0) {
				vthang= i;
				vtcot= j;
				break ;
			}		
		}
		if (vthang!=-1)
		break ;
	}
	if (vthang !=-1 && vtcot != -1) {
		cout<<"vi tri chan dau tien la: "<<endl;
		cout<<"hang: "<<vthang<<endl;
		cout<<"cot: "<<vtcot<<endl;
	}
	else 
	cout<<"khong co so chan" <<endl;	
}

bool ktra (int a) {
	if (sqrt(a)==(int) sqrt(a))
	return true;
	else
	return false ;
}

void sochinhphuongbien(int arr[][max], int m, int n) {
	int dem =0;
	for (int i=0;i<n ;i++) {
		if (ktra(arr[0][i]))
		dem++;
	}
	for (int i=0;i<n ;i++) {
		if (ktra(arr[m-1][i]))
		dem++;
	}
	for (int i=1;i<m-1 ;i++) {
		if (ktra(arr[i][0]))
		dem++;
	}
	for (int i=1;i<m-1 ;i++) {
		if (ktra(arr[i][n-1]))
		dem++;
	}
	cout<<"so chinh phuong tren bien la: "<<dem <<endl;
}

void dongtongmax(int arr[][max], int m, int n) {
	int tongmax =0, vitri=0 ;
	for (int i=0;i<n;i++) {
		tongmax+= arr[0][i];
	}
	for (int i=1; i<m ;i++) {
		int tong=0;
		for (int j=0 ;j<n ;j++) {
			tong+= arr[i][j];
		}
		if (tong>tongmax) {
		tongmax =tong ;
		vitri =i ;
		}
	}
	cout<<"dong co tong lon nhat la: "<<vitri<<" "<<tongmax ;
}
int main() {
	int arr[max][max] ,n, m ;
	taomatran (arr, m, n) ;
	xuat(arr, m, n) ;
	timvitrichan(arr, m, n) ;
	sochinhphuongbien(arr, m, n) ;
	dongtongmax(arr, m, n) ;
}
