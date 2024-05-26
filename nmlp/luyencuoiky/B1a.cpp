#include <iostream> 

using namespace std ;

void nhap (int &a , int &n , float &x) {
	cin>>a>>n>>x ;
}

int thangtraxong (int a ,int n, float x ) {
	int dem = 0 ;
	x= (float )x* 0.01 ;
	while (a> 0) {
		float l = (float )a* x ;
		a =a - (n -l) ;
		dem++ ;
	}
	return dem ;
}

int main () {
	int a, n ;
	float x ;
	nhap (a, n, x) ;
	cout<<thangtraxong(a,n,x) ;
 }
