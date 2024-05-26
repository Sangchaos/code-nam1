#include <iostream>
#include <string.h>
#define max 100 

using namespace std ;
void daochuoi(char sang[], int vtd, int vtc) {
	while (vtd<vtc) {
		int tmp=sang[vtd];
		sang[vtd]=sang[vtc] ;
		sang[vtc]=tmp ;
		vtd++;
		vtc--;
	}
}
int main() {
	char sang[max] ;
	cin.getline(sang , max ) ;
	int vtd =-1 ,vtc =-1 ;
	int dd=strlen(sang)-1 ;
	
	for (int i=0;i <strlen(sang);i++) {
		if(sang[i]==' ') {
			vtd= i;
			break ; 
		}
	}

	for (int i=strlen(sang)-1;i>=0;i-- ) {
	
		if(sang[i]==' ') {
			vtc=i;
			break;
		}
	}
	int l=dd-vtc-vtd;
	cout<<vtd<<" "<<vtc<<" "<<endl;
	daochuoi(sang,0, dd);
	daochuoi(sang,0,vtd-1+l);
	daochuoi (sang,vtd+1+l ,vtc-1+l) ;
	daochuoi(sang,vtc+1+l,dd);
	cout<<sang<<endl<<dd;
}
