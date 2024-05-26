#include <iostream>
#include <string.h>
#define max 100

using namespace std ;

void doi (char s[]) {
	if ( s[0] >='a' && s[0]<='z') 
		s[0]-=32;
	for (int i=0;i<strlen(s);i++) {
		if (s[i]==' ' && s[i+1]!=' ') {
			if ( s[i+1] >='a' && s[i+1]<='z')
			s[i+1]-=32;
		}
	}
}

int main() {
	char s[max] ;
	cin.getline(s , max ) ;
	doi(s);
	cout<<s;
} 
