#include <iostream>
#include <string.h>
using namespace std ;

int main() {
	char s[500];
	cin>>s;
	int so = s[0]- '0' ;
	int n = strlen(s) ;
	for (int i=0 ;i<n-1;i++) {
		s[i]=s[i+1] ;
	}
	n--;
	so= so*n ;
	int k= 0;
	for (int i=n ;i<so  ;i++) {
		s[i]=s[k++];
		if (k==n) 
		k=0;
	}
	s[so]= '\0';
	n=so ;
	cout<<s;
}
