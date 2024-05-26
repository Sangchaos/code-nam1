#include <iostream>
#include <fstream>
#include <cmath> 
using namespace std ;

struct ps{
    int t ;
    int m ;
};

void rutgonps(ps &a) {
	if (a.t <0 && a.m<0) {
		a.t= a.t * (-1) ;
		a.m= a.m* (-1) ;
	}
    int m=abs( a.t );
    int n= abs(a.m) ;
    while (n!=0) {
        int r = m% n ;
        m= n;
        n= r;
    }
    a.t = a.t/m ;
    a.m = a.m / m ;
    if ( a.t > 0 && a.m< 0) {
    	a.t = a.t *(-1) ;
    	a.m= a.m* (-1) ;
	}
    cout<<a.t<<" "<<a.m;
}
void nhapps (ps &a) {
    cin>>a.t>>a.m ;
}
void tong2ps (ps &a, ps &b) {
	a.t	=  a.t* b.m + a.m * b.t;
	a.m = a.m * b.m ;
}

void nhap(ps a[], int &n) {
	cin>>n ;
	for (int i =0 ;i<n ; i++) {
		nhapps(a[i]) ;
	}
}

void psmax(ps a[], int n) {
	ps max ;
	float k = (float) a[0].t / a[0].m ;
	for (int i =1 ;i< n;i++) {
		float n = (float )a[i].t / a[i].m ;
		if (n>k) {
			k= n ;
			max.t= a[i].t ;
			max.m=a[i].m;
		}
	}
	rutgonps(max) ;
	
}
void tongnhieups (ps a[], int n) {
	ps tong ;
	tong.t = a[0].t ;
	tong.m= a[0].m;
	for (int i =1 ;i<n ;i++) {
		tong2ps(tong, a[i]) ;
	}
	rutgonps(tong) ;
}
void tichcacps(ps a[], int n) {
	ps tich ;
	tich.t =1 ;
	tich.m=1 ;
	for (int i= 0; i<n ;i++) {
		tich.t *= a[i].t ;
		tich.m *= a[i].m ;
	}
	rutgonps(tich) ;
}
void daops (ps a[], int n) {
	for (int i =0 ;i<n ;i++) {
		swap(a[i].t , a[i].m) ;
		rutgonps(a[i]) ;
		cout<<" " ;
	}
}
int main() {
    ps a[50]; int n ;
    nhap(a,n) ;
    psmax(a, n ) ;
    cout<<endl;
    tongnhieups(a, n) ;
    cout<<endl ;
    tichcacps(a,n) ;
    cout<<endl;
    daops(a, n) ;
}
