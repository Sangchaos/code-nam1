#include <iostream> 

using namespace std ;

void nhap(int arr[] , int &n) {
	cout<<"nhap n = ";
	cin>>n;
	for (int i = 0; i<n; i++) {
		cin>>arr[i] ;
	}
}


void chanmax (int arr[] , int &n) {
	int vitri=0;
	for (int i=n-1 ;i>=0 ;i--) {
		vitri++;
		if (arr[i] %2==0) 
			break;
		
	}
	for (int i= (n-vitri); i<n-1;i++) {
		arr[i] = arr[i+1] ;
	}
	n--;
}
void xuat (int arr[] , int n ) {
	for (int i=0 ;i<n;i++) {
		cout<<arr[i]<<" " ;
	}
}

int tongle (int arr[] , int n ) {
	int tong=0 ;
	for (int i=0; i<n;i++) {
	
		if (arr[i]%2!=0 && (arr[i]>9 &&arr[i]<100)) {
			tong+= arr[i] ;
		}
	}
	return tong;
}
	
void chon(int &a, int arr[] , int &n) {
	cin>>a;
	while (a<2 || a>4) {
		cin>>a;
	}
	switch (a) {
	
	case 2: nhap(arr, n) ; break ;
	case 3: xuat(arr , n) ;break;
	default : cout<<"sai";
	}
}
int main() {
	int n,a;
	int arr[100] ;
	chon(a, arr , n) ;
}
