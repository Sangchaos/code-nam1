#include <iostream>
#include <string.h>
#define max 100

using namespace std ;

char* hai(char s[]) {
	char *s2 = new char[max];
	int dau=0;
	for (int i=0;i<strlen(s);i++) {
		if (s[i]==' '&& s[i+1]!=0) {
			dau=i+1;
			break;
		}
	}
	int j=0;
	for(int i=dau;i<strlen(s);i++) {
		s2[j++]=s[i];
		if (s[i]==' ' || s[i]=='\0') {			
			break;
		}
	}
	s2[j]='\0';
	return s2;
}

int main () {
	char s[max] ;
	cin.getline(s , max) ;
	char *s2 =hai(s) ;
	cout<<s2;
	delete[] s2;
}
