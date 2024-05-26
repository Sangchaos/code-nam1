#include <iostream>
#include <string.h>
#define max 100

using namespace std ;

void ktra (char s1[], char s2[]) {
	int l1= strlen(s1), l2= strlen(s2) ;    // dinh van sang
											// vann
	int j=0, dem=0; 
	for (int i=0;i<l1;i++) {
		if (s1[i]==s2[j] && j<l2) {
			j++;
		}
		if (j==l2) {
		dem++;
		j=0; 
		}
	}
	cout<<dem; 
}

int main () {
	char s1[max] , s2[max] ;
	cin.getline(s1,max);
	cin.getline(s2, max) ;
	ktra(s1,s2); 
}
