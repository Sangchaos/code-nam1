#include <iostream>
#include <string.h>
const int max =20;

using namespace std ;

bool manh(char a[]) {
	int demchu= 0; 
	int demso= 0;
	int demdacbiet=0 ;
	int n = strlen(a) ;
	if (n>= 8) {
		for (int i=0 ;i<n ;i++) {
			if (a[i] >= '0' && a[i] <='9') 
			demso++ ;
			else if (a[i]>='A' && a[i] <='z')
			demchu++ ;
			else 
			demdacbiet++;
		}
		if (demso != 0 && demchu !=0 && demdacbiet != 0) 
		return true ;
		else
		return false ;
	}
	else 
	return false ;	
} 

bool tb(char a[]) {
	int demchu= 0; 
	int demso= 0;
	int demdacbiet=0 ;
	int n = strlen(a) ;
	if (n>=5 ) {
		for (int i=0 ;i<n ;i++) {
			if (a[i] >= '0' && a[i] <='9') 
			demso++ ;
			else if (a[i]>='A' && a[i] <='z')
			demchu++ ;
			else 
			demdacbiet++;
		}
		if (n>=5 && n<= 7) {
			if (demso != 0 && demchu !=0 && demdacbiet != 0) 
			return true ;
			else
			return false ;
		}
		else {
			if (demso != 0 && demchu !=0 && demdacbiet == 0 || demso == 0 && demchu !=0 && demdacbiet != 0 || demso != 0 && demchu ==0 && demdacbiet != 0 )
			return true ;
			else 
			return false ;
		}
	}
	else 
	return false ;
}
bool yeu(char a[] )	{
	int demchu= 0; 
	int demso= 0;
	int demdacbiet=0 ;
	int n = strlen(a) ;
		
	if (n<= 7) {
		if ( n<5)
		return true ;
		else {
			for (int i=0 ;i<n ;i++) {
			if (a[i] >= '0' && a[i] <='9') 
			demso++ ;
			else if (a[i]>='A' && a[i] <='z')
			demchu++ ;
			else 
			demdacbiet++;
			}
			if (demso != 0 && demchu !=0 && demdacbiet == 0)
			return true ;
		}
	}
	else 
	return false ;
}
void nhap(char a[] , int &n) {
	cin>>n;
	int dem[3] = {0 , 0 ,0} ;
	do {
		cin>>a;
		n--;
		if (manh(a))
		dem[0]++;
		else if (tb(a))
		dem[1] ++ ;
		else if (yeu(a))
		dem[2] ++ ;
	}		
	while (n>0) ;
	cout<<dem[0]<<" "<<dem[1]<<" "<<dem[2] ;
}

void xuat(char a[], int n) {
	
}
int main() {
	char a[20] ;
	int n; 
	nhap(a , n) ;
	return 0;
}
