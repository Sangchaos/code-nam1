#include <iostream> 
using namespace std;

void nhap (int &n , int &a, int &b) {
	cout<<"1.Phep cong:"<<endl;
	cout<<"2.Phep tru:"<<endl;
	cout<<"3.Phep nhan:"<<endl;
	cout<<"4.Phep chia:"<<endl;
	cout<<"nhap phep toan can tinh: ";
	cin>>n;
	while (n>4|| n<1) {
		cout<<"khong hop le!. Vui long nhap lai tu 1 => 4 ";
		cin>>n;
	}
	cout<<"nhap 2 so a va b ";
	cin>>a>>b;
} 

void tinh(int n ,int a , int b) {
	float thuong= (float) a/b ;
		switch (n) {
			case 1: cout<<"tong = "<<a+b; break;
			case 2: cout<<"hieu = "<<a-b; break;
			case 3: cout<<"tich = "<<a*b; break;
			case 4: cout<<"thuong = "<<thuong; break;
			default : cout<<"khong hop le!. Vui long nhap lai tu 1 => 4" ; 
		}
	}
	


int main() {
	int n, a ,b;
	nhap (n ,a ,b) ;
	tinh (n , a ,b );
	return 0;
}
