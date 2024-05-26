#include <iostream>
#include <algorithm>
#define Max 100001
using namespace std; 

char a[1001][1001] ;
int f[1001][1001] ;

int main() {
	int n , m ;
	cin>>n>>m;
	for (int i = 1 ;i <=n ;i++) {
		for (int j =1 ; j<=m ; j++) {
			cin>>a[i][j] ;
			if (a[i][j]== '*')
			f[i][j] =1 ;
			else 
			f[i][j] = 0 ;
		}
	}
	for (int i =1 ;i<=n ;i++) {
		for (int j =1 ;j<=m ;j++) {
			f[i][j] = max(f[i-1][j], f[i][j]) + f[i][j] ;
			}
		}
	
	cout<<f[n][m] ;
}
