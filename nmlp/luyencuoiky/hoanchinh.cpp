#include <iostream>
#include <cstring>
using namespace std;

void nhap(char s[]) {
    cin.getline(s, 100);
}

char* xoadacbiet(char s[]) {
    int n = strlen(s), dem = 0;
    for (int i = 0; i < n; i++) {
        if ((s[i] < 'A' || (s[i] > 'Z' && s[i] < 'a') || s[i] > 'z') && s[i] != ' ') {
            dem++;
            continue;
        }
        s[i - dem] = s[i];
    }
    s[n - dem] = '\0'; 
   
    return s;
}
char* xoa(char s[]) {
	int n=strlen(s);
	int dem =0 ;
	for (int i=0;i<n;i++) {
		if( s[i]==' ' && s[i+1]==' '){
			dem++;
			continue;
		}
		s[i-dem]=s[i] ;		
	}
		s[n-dem]='\0';
		n=n-dem;
	if (s[0]==' ') {
		for (int i=0;i<n;i++) {
			s[i]=s[i+1]; }
	}
	return s ;	
}

char * hoathuong(char s[]) {
	int n =strlen(s) ;
	if (s[0] >= 'a' && s[0] <='z') 
	s[0] -= 32 ;
	for (int i= 1; i<n ;i++) {
		if (s[i]!=' ' && s[i-1]==' ') {
			if (s[i] >= 'a' && s[i] <='z' )
			s[i]-=32 ;
		}
		else {
			if(s[i] >= 'A' && s[i] <='Z')
			s[i]+=32 ;
		}
		
	}
	return s;
}
 int main() {
    char s[100];
    nhap(s);
    xoadacbiet(s) ;
    xoa(s) ;
    hoathuong(s) ;
    cout<<s ;
    return 0;
}

