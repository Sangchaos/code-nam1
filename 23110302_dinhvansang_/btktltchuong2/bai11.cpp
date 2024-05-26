#include <iostream> 
#include <vector>
#include <algorithm>
#include <ctime>
#include<cstdlib>
const int Max = 100 ;
using namespace std ;

int dx[4] = {0 , 1, -1, 0} ;
int dy [4] = {1, 0, 0 , -1} ;
int a[Max][Max] , m, n;

void nhap (int a[][Max], int &m , int &n) {
    cin>>m>>n;
    srand(time(NULL)) ;
    for (int i=0;i<m;i++) {
		for (int j=0;j<n;j++) {
			a[i][j] = rand() % 2;
		}
	}
}
void xuat (int a[][Max] , int m, int n) {
    for (int i=0;i<m;i++) {
		for (int j=0;j<n;j++) {
			cout<<a[i][j]<<" " ;
		}
        cout<<endl ;
	}
}
int loang( int i, int j) {
    int dem =1 ;
    a[i][j] = 0 ;
    for (int k =0 ;k< 4 ;k++) {
        int i1 = i+ dx[k] ;
        int j1 = j + dy[k] ;
        if (i1 >=0 && i1< m && j1 >=0 && j1< n && a[i1][j1]==1) {
            dem+=loang(i1, j1) ;            
        }
    }
    return dem;
}

int main() {
    int dem = 0 ;
    vector<int> b;
    nhap(a, m, n) ;
    xuat(a, m ,n) ;
    for (int i=0;i<m;i++) {
		for (int j=0;j<n;j++) {
			if (a[i][j]==1) {
                dem ++ ;
                int k = loang(i, j);
                b.push_back(k) ;
            }
		}
	}
    sort(b.begin(), b.end()) ;
    cout<<dem<<endl;
    for (int x : b) {
        cout<<x<<" ";
    }
}