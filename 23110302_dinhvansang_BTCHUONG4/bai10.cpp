// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>
#include <set>
using namespace std  ;
int a[500] ,n, ptmax, demmax;

void Try (int i) {
    if (i==n) return ;
    int dem =0 ;
    for (int j = 0 ;j <n ;j++) {
        if (a[i]==a[j]) {
            dem++ ;
            if ( dem > demmax) {
                demmax = dem ;
                ptmax = a[i] ;
            }
        }
    }
    Try(i+1) ;
}

int main () {
    freopen ("input.txt", "r", stdin) ;
    freopen ("output.txt", "w", stdout) ;
    cin>>n ;
    for (int i =0 ;i<n ;i++) {
        cin>>a[i] ;
    }
    Try(0) ;
    cout<<ptmax;
}