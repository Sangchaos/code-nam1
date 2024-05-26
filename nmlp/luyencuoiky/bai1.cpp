#include <iostream> 
#include <cmath>
using namespace std ; 

void nhap(float &cn, float &cc) {
	cout<<"nhap can nang va chieu cao: ";
	cin>>cn>>cc;
	cout<<endl;
}

float BMI(float cn , float cc) {
	float a;
	a= (float ) cn / (cc*cc) ;
	return a;
}
int xuat(float cn, float cc) {
	float n= BMI(cn , cc) ;
	if (n<= 0) 
	return -1 ;
	if ( n> 0 && n<15) 
	return 1 ;
	else if (n>=15 && n<16) 
	return 2; 
	else if (n>=16 && n<18.5) 
	return 3; 
	else if (n>=18.5 && n<25) 
	return 4; 
	else if (n>=25 && n<30) 
	return 5; 
	else if (n>=30 && n<35) 
	return 6; 
	else if (n>=35 && n<40) 
	return 7; 
	else if (n>=40) 
	return 8; 
	
	
}
int main () {
	float a , b ;
	nhap(a, b) ;
	cout<<xuat(a, b) ;
}
