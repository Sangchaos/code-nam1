// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>
#define Max 100
using namespace std ;

void nhap(int a[], int b[Max][Max], int &m, int &n) {
    cin>>m>>n ;
    for(int i =0 ;i< m*n ;i++) {
        cin>>a[i] ;
    }
}

void chuyendoi(int a[], int b[Max][Max] , int m, int n ){
    int k =0 ;
    for (int i=0;i<m;i++) {
		for (int j=0;j<n;j++) {
			b[i][j] = a[k++] ;
		}
	}
    for (int i=0;i<m;i++) {
		for (int j=0;j<n;j++) {
			cout<<b[i][j]<<" ";
		}
        cout<<endl;
	}
}

int main() {
    int a[Max] , b[Max][Max] , m ,n ;
    nhap(a,b, m, n) ;
    chuyendoi(a, b, m ,n) ;
}