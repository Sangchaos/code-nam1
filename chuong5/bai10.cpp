#include <iostream>
#include <algorithm>
using namespace std ;

int n , a[100] ;

void khoitao() {                                                                                                                                          
    for (int i =1 ;i<=n ;i++) {
        a[i] =i ;
    }
}

void sinhhoanvi (int &end) {
    int i = n-1 ;
    while (i > 0 && a[i] > a[i+1] ) {
        i-- ;
    }
    if (i==0) {
        end =1 ;
    }
    else {
        int j =n ;
        while (a[i]> a[j]) {
            j-- ;
        }
        swap(a[i], a[j]) ;
        reverse(a+ i+1, a+n) ;
    }
}

int main() {
    freopen ("input.txt", "r", stdin) ;
    freopen ("output.txt", "w", stdout) ;
    cin>>n;
    int end =0;
    khoitao() ;
    while ( end==0 ) 
    {   
        for (int i =1 ;i<=n;i++) {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        sinhhoanvi(end);
    }
    return 0;
}