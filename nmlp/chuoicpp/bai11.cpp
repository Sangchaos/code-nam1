#include <iostream>
#include <string.h>
#define max 100

using namespace std ;

void doi (char s[]) {
	if ( s[1] >='a' && s[1]<='z') 
		s[1]-=32;
	for (int i=0;i<strlen(s);i++) {
		if (s[i]==' ' && s[i+1]!=' ') {
			if ( s[i+2] >='a' && s[i+2]<='z')
			s[i+2]-=32;
		}
	}
}

int main() {
	char s[max] ;
	cin.getline(s , max ) ;
	doi(s);
	cout<<s;
} 
