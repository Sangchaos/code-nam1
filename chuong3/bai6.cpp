#include <bits/stdc++.h>
using namespace std ;

int main () {
    int x, n ;
    float gt = 1, s=1;
    cin>>x>>n ;
    for (int i =1 ;i<=n ;i++) {
        gt*=i ;
        s += pow(x, i) / gt ;
    }
    cout<< fixed << setprecision(4) << s;
}