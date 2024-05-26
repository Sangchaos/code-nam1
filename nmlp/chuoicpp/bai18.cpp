#include <iostream> 
#define max 100
#include <string.h>

using namespace std ;

char* biendoi(char s[]){
	
	for (int i=0 ;i< strlen(s);i++) {
		if (( s[i]>= 'a' && s[i]<'z') || ( s[i]>= 'A' && s[i]<'Z')) {
			s[i]=s[i]+1;
		}
		else if (s[i]=='z') {
			s[i]= 'a';
		}
		else if (s[i]=='Z') {
			s[i]='A';
		}
	}
	return s;
}

int main () {
	char s[max] ;
	cin.getline(s,max) ;
	cout<<biendoi(s);
}
