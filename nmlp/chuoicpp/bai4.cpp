#include <iostream> 
#include<string.h>
#define max 100

using namespace std;

void dao( char s[] ) {
	int bg=0 , end=0;
	s[strlen(s)]=' ';
	for (int i=0;i<=strlen(s);i++) {		
		if(s[i]==' ') {
			end=i-1;
			while( bg<end) {
				swap (s[bg], s[end]) ;
				bg++;
				end--;	
			}
			bg=i+1;	
		}
	}
}


int main() {
	char s[max];
	cin.getline(s ,max) ;
	strrev(s) ;
	dao(s);
	cout<<s;
}
