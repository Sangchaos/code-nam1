// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>
#define Max 100
using namespace std ;

void nhap (int a[][Max], int b[], int &m, int &n ) {
    cin>>m>>n ;
    for (int i=0;i<m;i++) {
		for (int j=0;j<n;j++) {
			cin>>a[i][j];
		}
	}
}
void doimang2chieuthanhmang1chieu(int a[][Max], int b[], int m , int n) {
    int k =0 ;
    for (int i=0;i<m;i++) {
		for (int j=0;j<n;j++) {
			b[k++] = a[i][j] ;
		}
	}
    for(int i=0 ;i< m*n ;i++) {
        cout<<b[i]<<" " ;
    }
}

int main() {
    int a[Max][Max] , b[Max] , m, n ;
    nhap(a, b, m,n) ;
    doimang2chieuthanhmang1chieu(a, b, m ,n) ;
}