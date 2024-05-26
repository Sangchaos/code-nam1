#include <iostream>
#include <string.h>
#define max 100

using namespace std ;

void in (char s[]){
	for (int i =0;i<strlen(s); i++) {
		cout<<s[i];
		if (s[i]==' ') {
			cout<<endl;
		}
	}
}

int main () {
	char s[max] ;
	cin.getline(s, max) ;
	in(s);
}
