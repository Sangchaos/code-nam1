#include <iostream> 
#define max 100
using namespace std ;

void nhap (int arr [] , int &n) {
	cout<<"nhap n = ";
	cin>>n;
	for (int i= 0; i<n ;i++) {
		cin>>arr[i] ;
	}
}

void xuat(int arr[] , int &n) {
	for (int i=0; i<n ; i++) {
		
			cout<<arr[i]<<" ";
            
		if (arr[i]>arr[i+1])
        
        cout<<endl;
	}
}

int main() {
	int n, arr[max] ;
	nhap(arr , n) ;
	xuat(arr , n) ;
	return 0;
}