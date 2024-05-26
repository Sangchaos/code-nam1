#include <iostream>
#include <string.h>
#define max 100
//    nhan     mat    cac    
using namespace std ;

void xoa(char s[]) {
	int n=strlen(s);
	int dem =1;
	for (int i=0;i<n;i++) {
		if((s[i]==' ' && s[i+1]==' ') ){
			dem++;
			continue;
		}
		s[i-dem]=s[i] ;		
	}
		s[n-dem]='\0';
		n=n-dem;
//	if (s[0]==' ') {
//		for (int i=0;i<n;i++) {
//			s[i]=s[i+1]; }
//	}	
}

int main() {
	char s[max] ;
//	cin.getline(s, max) ;
//	xoa(s) ;
//	cout<<s;
	cout<<'s'-32;
	
	
}
