#include <iostream> 
#include <cmath>
using namespace std ;
void nhap(int a[], int &n) {
    cin>>n;
    for (int i=0; i<n ; i++) {
        cin>>a[i] ;
    }
}

int congsaimax (int a[], int n) {
	int dem =0, max= 0;
	for (int i= 0;i<n-2;i++) {
		int n= abs(a[i]- a[i+1]) ;
		if ( abs(a[i]- a[i+1]) == abs(a[i+1]- a[i+2])) {
			dem ++ ;
			if (dem >=2) {
				if (n> max) {
					max= n;
				}
			}
		}
		else 
		{
			dem = 0 ;
		}
	}
	return max ;
}
int main () {
	int a[100] ,  n;
	nhap(a, n) ;
	cout<<congsaimax(a,n) ;
}
