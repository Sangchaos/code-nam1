#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float a, b, c, S;
	cout << "Do dai 1 canh goc vuong a la:";
	cin >> a;
	cout << "Do dai 1 canh goc vuong b la:";
	cin >> b;
	c = sqrt((a * a) + (b * b));
	cout << "Do dai canh huyen cua 1 tam giac vuong la:"<< c;
	S = 0.5 *a*b ;
	cout << "\nDien tich cua tam giac vuong la:"<<(float) S;
	return 0;
}