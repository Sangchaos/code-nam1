#include <iostream>
#include <cmath>
#define max 100
using namespace std ;

void nhap(int a[], int &n) {
    cin>>n;
    for (int i=0; i<n ; i++) {
        cin>>a[i] ;
    }
}
bool nt (int n) {
    if (n< 2) 
    return false ;
    for (int i =2; i<=sqrt(n) ; i++) {
        if (n%i==0)
        return false ;
    }
    return true ;
}
int reduceArray (int a[],int &n) {
    int dem =0,tong =0;
    for (int i =0 ;i<n ;i++) {
        if (nt(a[i])) {
        	dem++ ;
        	if (nt(a[i])  && nt (a[i+1])==false ) {
        		for (int j= i-dem ; j =i ; j++) 
        		tong+= a[j] ;
			}
			a[i] = tong ;
        	
        }
        else
        	{
        		tong=0;
        		dem=0;
			}
		
    }
    return dem ;
}
void xuat(int a[], int n) {
	for (int i=0;i<n ;i++) {
		cout<<a[i]<<"\t" ;
	}
}
int main() {
    int a[max] , n ;
    nhap(a, n) ;
    reduceArray(a, n) ;
    xuat(a, n) ;
} 