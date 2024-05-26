// MSSV: 23110302 
// Ho và tên : Ðinh Van Sáng  
// 04/03/2005  

#include <iostream>
#include <cmath>
using namespace std ;

int chuyensannhiphan(int &n, int &a) {
    cout<<"nhap so n: "; cin>>n;
    cout<<"chuyen tu thap phan sang: "; cin>>a ;
    int x = 0, k=1;
    while( n> 0) {
    	x = x + (n%a) * k;
    	n=n /a ;
    	k= k*10 ;
	}
	return x ;
}

int main() {
    int n ,a;
    cout<<chuyensannhiphan(n,a) ;
}