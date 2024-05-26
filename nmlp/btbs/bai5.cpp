
#include <iostream>
#define max 100
using namespace std ;



void nhap(int B[], int &b, int C[] , int &c) {
	cout<<"nhap b = ";
	cin>>b;
	for (int i=0;i<b;i++) {
		cin>>B[i];
	}
	cout<<"nhap c = ";
	cin>>c;
	for (int i=0;i<c;i++) {
		cin>>C[i];
	}
}

void xuat(int B[], int &b, int C[], int &c, int A[], int &a) {
	for (int i=0;i<c;i++) {
		int vt=0;
		for (int j=0;j<b;j++) {
			if (C[i]>B[j]) {
				vt++;
			}
		}
		for (int k=b;k>=vt;k--)	{
			B[k+1] = B[k] ;
		}
		B[vt]=C[i] ;
		b++;
	}
	for (int i=0;i<b;i++) {
		cout<<B[i]<<" ";
	}		
}
int main() {
	int n, a, b, c;
	int A[max] ,B[max] ,C[max];
	nhap(B, b,C, c ) ;
	xuat(B,b,C,c,A,a) ;
	return 0;
}

