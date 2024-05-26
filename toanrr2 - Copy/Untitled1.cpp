#include <iostream>
#include <cmath>
using namespace std ;
int f[1235] ={0};
int res[1259] ;
int main() {
    f[0] = 0;
    for (int i =1 ;i <=9 ;i++) {
        for (int j =1 ;j <=5 ;j++) {
            for (int k =0 ;k <=9 ;k++) {
            	int m = 0;
                if ( j -i == k-j ) {
                	m = i * 100 + j*10 + k;
                	f[m] =1;
				}
            }
        }
    }
    for (int i = 1 ; i <= 1233;i++) {
    	res[i] = res[i-1] + f[i]  ;
	}
	for (int i = 1234 ;i<=1259;i++) {
		res[i] = 0;
	}
    int tong = 0 ;
    long long n ; cin>> n;
    if ( n <=71) cout<<1 ;
    else if ( n > 71 && n < 720) {
    	tong = (n/60) * 100 + n % 60 ;
    	cout<<res[tong] +1 ;
	}
	else {
		tong = n / 720 * 31 ;
		n = ((n % 720 ) / 60 ) * 100 + (n % 720 ) % 60 ;
		cout<<res[n] + 1 + tong ; 
	}
    
}
