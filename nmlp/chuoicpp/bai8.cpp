#include <iostream>
#include <string.h>
#define max 100

using namespace std;

bool ktra (char s1[] ,char s2[]){
	int j=0;
	for (int i=0;i<strlen(s1);i++) {
		if (s1[i]==s2[j]) {
			j++;
		}
		if (j==strlen(s2)) {
			return true;
		}
	}
	return false ;
}

int main() {
	char s1[max] , s2[max] ;
	cin.getline(s1, max) ;
	cin.getline(s2, max) ;
	if (ktra(s1,s2)) {
		cout<<"dung" ;
	}
	else cout<<"sai" ;
}
