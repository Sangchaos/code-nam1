#include <iostream>
#include <math.h> 

using namespace std;
int dem(int n) {
    int dem = 0;
    while (n > 0) {
        n /= 10;
        dem++;
    }
    return dem;
}
bool ktra(int n) {
    int a = n ;
    int sum = 0;
    while (a > 0)
    {   
        int k = a % 10 ;
        int m = pow (k , dem(n)) ;
        sum += m;
        a = a/10;
    }    
    if (sum != n) 
    return false ;
    else 
    return true ;
}
int main() {
    freopen ("input.txt", "r", stdin) ;
    freopen ("output.txt", "w", stdout) ;
    int n ;
    cin >> n ; 
    int a[1000] ;
    int s = 0 ;
    for (int i = 0 ; i < n ; i++) {
        cin >> a[i] ;
        if(ktra(a[i])) {
            s += a[i] ;
        }
    }
    cout<<s<<endl;

    return 0 ;
}