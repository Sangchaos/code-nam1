#include <iostream>
#include <string>
#define max 100
using namespace std;

void demso (string s ) {
	int dem=1;
	for (int i=0;i<length(s);i++) {
		if (s[i]!=' '&& s[i+1]==' ') {
			dem++;
		}		
	}
	cout<<dem;
}

int main() {
	string s;
	 
	getline(cin, s) ; 
	demso(s);
}
