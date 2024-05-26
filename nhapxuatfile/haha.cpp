#include <iostream>
#include <string.h>
#define max 100000
using namespace std;

void demso (char s[]) {
	int dem=1;
	for (int i=0;i<strlen(s);i++) {
		if (s[i]!=' '&& s[i+1]==' ') {
			dem++;
		}		
	}
	cout<<dem;
}

int main() {
	char s[max] ;
	cin.getline(s,max);
	demso(s);
}