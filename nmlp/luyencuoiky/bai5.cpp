#include <iostream> 
#define max 100 

using namespace std ;

void nhap (int arr[] , int &n) {
	cin>>n ;
	for(int i= 0 ;i<n ;i++) {
		cin>>arr[i] ;
	}
}


void soft (int arr[] , int n) {
	for (int i= 0;i<n ;i++) {
		for (int j=i+1 ;j<n ;j++) {
			if (arr[i]> arr[j]) {
				int t = arr[i] ;
				arr[i]=arr[j] ;
				arr[j] = t ;
			}
		}
	}
}
void xuat (int arr[] , int n ) {
	soft(arr, n) ;
	for (int i =0;i<n ;i++) {
		if (arr[i] ==arr[i+1] || arr[i-1] == arr[i]) 
		continue ;
		cout<<arr[i]<<"\t" ;
	}
}

int main() {
	int arr[max] ,n ;
	nhap(arr, n) ;
	soft(arr, n) ;
	xuat(arr, n) ;
}
