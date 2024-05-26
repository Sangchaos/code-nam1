#include <iostream> 
using namespace std ;

void nhap (int a[][50], int &m, int &n) {
	cin>>m>>n;
	for (int i =0;i< m;i++) {
		for (int j =0;j< n ;j++) {
			cin>>a[i][j] ;
		}
	}	
}

int main() {
	int a[50][50], m, n ;
	nhap(a, m, n);
}
