#include <iostream> 
#include <string.h>
using namespace std ;

int main() {
	char s[200] ;
	cin.getline(s, 200) ;
	int n = strlen(s) ;
	int dem= 1;
	for (int i =0 ;i<n ;i++) {
			if (s[i]==' ' && s[i-1] !=' ')
			dem++ ;
		}
	
	if (s[0] ==' ' && s[n-1]==' ') 
	cout<<dem -2;
	else if (s[0] ==' ')
	cout<<dem-1;
	else if (s[n-1] ==' ')
	cout<<dem-1;
	else 
	cout<<dem ;
}
