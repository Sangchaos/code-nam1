#include <iostream>
#define Max 100000;
using namespace std ;

int m,n ; 
int a[1000][1000] ;

int maxhangmincot () {
    for (int i = 0;i <m ;i++) {
        int max = a[i][0] , vt; 
        for (int j = 0;j <n ;j++) {
            if (a[i][j] > max) {
                max = a[i][j] ;
                vt = j ;
            }
        }
        int min = a[0][vt] ;
        for (int j = 1;j <m ;j++) {
            if (a[j][vt] < min) {
                min = a[j][vt] ;
            }
        }
        if (min == max) {
            return max ;
        }
    }
}


int main() {
    cin>>m>>n ;
    for(int i=0 ; i<m ; i++) {
        for(int j=0 ; j<n ; j++) {
            cin>>a[i][j] ;
        }
    }
    cout<<maxhangmincot();
}