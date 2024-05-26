// MSSV: 23110302 
// Ho và tên : Ðinh Van Sáng  
// 04/03/2005  
// MATH132401_23_1_36

#include <iostream>
using namespace std ;

void nhap(int &m, int &n ) {
	cout << "nhap m, n:" ;
	do{
		cin>>m>>n ;
	}
	while (m>=n) ;
}

bool ktrachan (int n) {
	int tong=0 ;
	while (n>0 ) {
		tong+= n%10 ;
		n=n/10;
	}
	if (tong %2 ==0)
	return true ;
	else 
	return false ;
}
void xuat (int m, int n) {
	for (int i=m;i< n; i++)
	if (ktrachan(i))
	cout<<i<<"\t" ;
}

int main() {
	int m, n;
	nhap(m, n) ;
	xuat(m ,n) ;
}

