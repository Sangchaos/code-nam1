// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>
#include <limits.h>
#define Max 100
using namespace std ;

void nhap(int a[][100], int &m, int &n) {
    cin>>m>>n ;
    for (int i=0;i<m;i++) {
		for (int j=0;j<n;j++) {
			cin>>a[i][j];
		}
	}
}

void sonoimin(int a[][100], int m, int n) {
    int sn =-1, snmin = INT_MAX ;
    for (int i=0;i<m;i++) {
		for (int j=0;j<n;j++) {
			bool isMax = true;
            if (i > 0 && a[i][j] <= a[i-1][j]) isMax = false;
            if (i < m-1 && a[i][j] <= a[i+1][j]) isMax = false;
            if (j > 0 && a[i][j] <= a[i][j-1]) isMax = false;
            if (j < n-1 && a[i][j] <= a[i][j+1]) isMax = false;

            if (isMax) {
                sn = a[i][j];
                if (sn < snmin) 
                    snmin = sn;
            }
		}
	}
    cout<<snmin ;
}

int main() {
    int a[100][100] , m, n ;
    nhap(a, m, n) ;
    sonoimin(a, m, n) ;
}