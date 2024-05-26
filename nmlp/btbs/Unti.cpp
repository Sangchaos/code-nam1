#include <iostream> 
#include <ctime>
#include <cstdlib>
#include <limits>
#define Max 100
using namespace std ; 

void nhap (int a[][Max], int &n) {
	cin>>n;
	srand(time(NULL)) ;
	for (int i=0 ;i<n; i++) {
		for (int j =0 ;j<n ;j++) {
			a[i][j] =rand() %100 ;
		}
	}
}
void xuat (int a[][Max] ,int n) {
	for (int i=0;i<n ;i++) {
		for (int j=0; j<n;j++) {
			cout<<a[i][j]<<"\t" ;
		}
		cout<<endl<<endl<<endl;
		
	}
}
void xuatm (int a[][Max] , int n) {
	int x1, y1, x2, y2 ;
	int max = INT_MIN ;
	int max2 = INT_MIN;
	for (int i=0 ;i<n; i++) {
		for (int j =0 ;j<n ;j++) {
			if (a[i][j]>max) {
				max= a[i][j] ;
				x1= i;
				y1= j;
			}
		}
	}
	for (int i=0 ;i<n; i++) {
		for (int j =0 ;j<n ;j++) {
			if (a[i][j] >max2 && a[i][j] != max ) {
				max2 = a[i][j] ;
				x2= i;
				y2= j ;
			}
		}
	}
	cout<<x1<<" "<<y1<<endl;
	cout<<x2<<" "<<y2<<endl;
}

int main() {
	int a[Max][Max] , n ;
	nhap(a, n) ;
	xuat(a, n) ;
	cout<<endl;
	xuatm(a, n) ;
}
