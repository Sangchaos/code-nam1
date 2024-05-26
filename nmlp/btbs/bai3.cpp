#include <iostream>
#define max 100 
using namespace std;

void nhap (int arr[], int &n) {
	cout<<"nhap n = ";
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
}

void tach(int arr[] , int B[] ,int C[],int &n, int &b, int &c) {
	int chan=0, le=0;
	for (int i=0;i<n;i++){
		if (arr[i] %2==0) {
			B[chan] =arr[i];
			chan++;
		}
		else {
			C[le]=arr[i] ;
			le++;
		}
	}		
		b=chan;
		c=le;
		n=0;
	int tongchan=0 ;
	for (int i=0;i<b; i++) {
		cout<<B[i]<<" ";
		tongchan+=B[i];
	}
	cout<<endl;
	int tongle=0;
	for (int i=0;i<c;i++) {
		cout<<C[i]<<" ";
		tongle+=C[i] ;
	}
	cout<<endl;
	if (tongchan>tongle)
	cout<<"tong chan lon hon le";
	else
	cout<<"tong le lon hon chan";	
}

int main() {
	int n, b, c;
	int arr[max], B[max], C[max];
	nhap(arr, n);
	tach(arr ,B, C, n, b, c) ;
}
