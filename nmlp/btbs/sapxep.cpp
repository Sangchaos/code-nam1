#include <iostream> 
#define max 100
using namespace std ;

void nhap(int arr[] , int &n) {
	cout<<"nhap n = ";
	cin>>n;
	for (int i = 0; i<n; i++) {
		cin>>arr[i] ;
	}
}
bool chan(int n) {
	if (n%2==0)
	return true ;
	else
	return false ;
}
void sapxep(int arr[] , int n) {
	for (int i =0 ;i<n-1;i++) {
		for (int j=i+1;j<n;j++) {
			if (chan(arr[j])<chan(arr[i])  )
			swap (arr[j] , arr[i]) ;
		}
	}
	for (int i =0 ; i<n; i++) {
		cout<<arr[i]<<" ";
	}
}

int main() {
	int n;
	int arr[max];
	nhap(arr ,n);
	sapxep (arr , n) ;
}
