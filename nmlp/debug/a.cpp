#include <iostream>

using namespace std ;

int n , x[500] , a[500], k ;

void ql(int i, int bd, int sum ) {
    for (int j =bd ; j<=n; j++ ) {
        x[i] = a[j] ;
        if (sum + a[j] == k) {
            for (int h = 1 ;h <= i;h++) {
                cout<<x[h]<< " ";
            }
            cout<<endl;
        }
        else  {

            ql(i+1 ,j+1, sum + a[j]) ;
        }
    }
}

int main() {
    cin>>n>>k;
    for (int i =1 ;i<=n;i++) {
        cin>>a[i] ;
    }
    ql(1,1,0) ;
    return 0 ; 
}
