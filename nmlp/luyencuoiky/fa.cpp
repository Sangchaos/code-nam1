#include <iostream> 
#define max 100
using namespace std ;

void nhap (float a[], int &n, float &x) {
	cin>>n>>x ;
	for (int i =0 ;i<n ;i++) {
		cin>>a[i];
	}
}

void xuat (float a[], int n ,float x ) {
	int dem =0;
	for (int i=0 ;i<n ;i++) {
		if (a[i]==x) {
			dem++ ;
			cout<<i ; break ;
		}
		
	}
	if (dem==0) {
		if (x < a[0]) 
		a[0] = x ;
		else if ( x >a[n-1])
		a[n-1 ] =x ;
		else  {
			for (int i= 0; i< n;i++) {
				if ( x < a[i] && x> a[i-1]) {
					a[i-1]= x;
					for (int j = i; j<n ;j++) {
						a[j] = a[j+1] ;
					}
					n--;
					break ;
				}
			}
			
		}
			for (int i= 0;i<n; i++) {
				cout<<a[i] <<"\t";
			}	
	}
}

int main() {
	int n ;
	float a[max] , x ;
	nhap(a, n ,x) ;
	xuat(a, n ,x) ;
}
 
