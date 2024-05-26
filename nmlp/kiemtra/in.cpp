#include <iostream> 
#include <cmath>
using namespace std ; 



int nhap (int &n) {
	cin>>n ;
	int a[100000] ;
	int k=0 , p = n;
	while (p>0) {
		a[k++] = p%10 ;
		p=p/10 ;
	}
	int i=0 ;
	
	return a[n] ;
}

int main() {
	int q , n,k=0 ;
	cin>>q;
	int h=q ;
	int b[10] ;
	while (q> 0) {
		b[k++]= nhap(n) ;
		q--;
	}
	for (int i=0; i<h ;i++)	 {
		cout<<b[i] <<endl;
	}
	
}
