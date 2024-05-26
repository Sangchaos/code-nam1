#include <iostream>
#include <string.h>
#define max 100

using namespace std ;

void doi (char s[]) {
	int n=strlen(s) ;
	if ( s[n-1] >='a' && s[n-1]<='z') 
		s[n-1]-=32;
	for (int i=0;i<strlen(s);i++) {
		if (s[i]!=' ' && s[i+1]==' ') {
			if ( s[i] >='a' && s[i]<='z')
			s[i]-=32;
		}
	}
}

int main() {
	char s[max] ;
	cin.getline(s , max ) ;
	doi(s);
	cout<<s;
} 
