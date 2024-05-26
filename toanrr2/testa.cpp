#include <iostream>
#include <queue>
#include<bits/stdc++.h>
using namespace std ;

struct vitri {
	int x , y ;
};
int last1, last2 ;
int m ,n ;
int a[10005][10005] ;
int used[1000][1000] ;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
queue<vitri> v ;

void loangBFS() {
	while (!v.empty()) {
		vitri q = v.front() ;
		v.pop() ;
		for (int k = 0; k< 4 ;k++) {
			int nx = q.x + dx[k] ;
			int ny = q.y + dy[k] ;
			if (nx >=0 && nx < n && ny >=0 && ny<m && a[nx][ny]== 1) {
				if (used[nx][ny] == 0 ) {					
					vitri tmp ; 
					tmp.x = nx ;
					tmp.y = ny ;
                    last1 = nx ;
                    last2 = ny ;
					v.push(tmp) ;
					used[nx][ny] = used[q.x][q.y] +1 ;
				}
			}
		}
	}
}

int main() {
	// freopen ("input.txt", "r", stdin) ;
    // freopen ("output.txt", "w", stdout) ;
    memset(used , 0, sizeof(used)) ;
	cin>>n>>m;
	for (int i =0 ;i <n ;i++) {
		for (int j =0 ; j<m ; j++) {
			cin>>a[i][j] ;
			if (a[i][j]==2) {
                vitri tm ;
				tm.x = i;
				tm.y = j;
				used[i][j] = 1;
				v.push(tm) ;			
            }
		}
	}
	loangBFS() ;
    // for (int i =0 ;i<n ;i++) {
	// 	for (int j = 0 ; j<m ;j++) {
	// 		cout<<used[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
    cout<<used[last1][last2] -1 ;
}
