#include <iostream>
#define max 100

using namespace std;

void nhap ( int arr[], int &m) {
	cin>>m;
	if (m>=0 && m<20) {		
		for (int i=0;i<m;i++) {
			cin>>arr[i];
		}
	}		
}

void xuat(int arr[], int m) {
	for (int i=0;i<m;i++) {
		cout<<arr[i]<<" ";
	}
}

void soft (int arr[], int m) {
	for (int i=0;i<m;i++) {
		for (int j=i+1;j<m;j++) {
			if (arr[i]>arr[j] && arr[i]%2==1 && arr[j]%2==1)
			swap (arr[i], arr[j]) ;
			else if (arr[i]<arr[j] && arr[i]%2==0 && arr[j]%2==0)
			swap (arr[i], arr[j]) ;
		}
	}
	xuat (arr, m) ;
}
void soft2 (int arr[] , int &m) {
	int dem=0, j=m, k=0; 
	for (int i=0;i<m;i++) {
		if (arr[i]<0) {
			arr[j++]=arr[i];
			dem++;
			}
		else
		arr[k++]=arr[i]; 		
	}
	m=m+dem;
														// 8
														//-1 2 3 4 6 -7 -8 5
														//8
														//-1 2 3 4 6 -7 -8 5
														//2 3 4 6 5 -7 -8 5 -1 -7 -8
}
	
	
	

int main () {
	int arr[max] , m;
	nhap(arr, m);
	//soft (arr ,m);
	soft2(arr , m) ;
	xuat(arr , m) ; 
	
}


