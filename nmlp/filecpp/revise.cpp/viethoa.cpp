#include <iostream>
#define max 50
using namespace std ;

void nhap (int arr[][max] , int &m, int &n,int &k) {
	cin>>m>>n>>k;
	for (int i =0;i< m ;i++) {
		for (int j=0 ;j<n ;j++) {
			cin>>arr[m][n] ;
		}
	}
}

int xuat(int arr[][max] ,int m, int n , int k) {
	int demk=0 ;
	for (int i =0;i< m ;i++) {
		int dem =0;
		for (int j=0 ;j<n ;j++) {
			if (arr[i][j]==0) {
				dem++ ;
				if (dem==k) {
					demk++;
					if (arr[i][j+1] ==0 ) 
					dem=k-1;
					else 
					dem=0 ;
				}
			}
		}
	}
	return demk;
}

int main() {
	int arr[max][max] , m, n, k;
	nhap (arr,m, n, k) ;
	cout<<xuat(arr, m, n, k) ;
}