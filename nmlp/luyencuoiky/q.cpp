#include <iostream> 
using namespace std ;

int main() {
	int a , b ;
	cin>>a>>b;
	int dem=0;
	for (int i =a; i<=b ;i++) {
		int dem1= 0 ;
		for (int j = 1 ; j<=i;j++) {
			if (i % j==0) {
				dem1++;
			}
		}
		if (dem1==3)
		dem++ ;		
	}
	cout<<dem;
}
