#include <iostream>
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
int main () {
	int n ,m ;
	int arr[max][max] ;
	nhap(arr , n ,m) ;
	//cout<<Phantumin(arr ,n , m) ;
	cout<<tongmang2chieu(arr ,m ,n) ;
}