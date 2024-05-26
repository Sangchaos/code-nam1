#include <iostream> 
#include <algorithm>
using namespace std;

int main() {
    freopen ("input.txt", "r", stdin) ;
    freopen ("output.txt", "w", stdout) ;
    int n ;
    cin>>n ;
    int a[n] ; 
    for(int i=0;i<n;i++) {
        cin>>a[i] ;
    }
    sort(a,a+n) ;
    int le = 9999999;
    int chan =- 9999999 ;
    for (int i=0;i<n;i++) {
        if (a[i] % 2 == 0) {
            if (a[i] > chan  ) {
                chan = a[i] ;
            }
        }
        else {
            if (a[i] < le ) {
                le = a[i] ;
            }
        }
    }
    cout<<le;
}