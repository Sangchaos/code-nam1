#include <iostream>

using namespace std ;

int n, k , a[100], end =0 ,s,dem=0;

void Try(int i, int bd, int tong) {
	cout<<"bat dau ql "<<i<<" "<<bd<<" "<<tong<<endl; 
	for (int j = bd; j<=n;j++) {
		cout<<"tai i = "<<i<<" gan a[i] = "<<j<<endl;
		a[i] = j ;
	if (i==k) {
		if (tong + j ==s) {
			dem++;
		}
	}
	else {
		Try (i+1 ,j+1,tong+j) ;
	}
	}
}
int main() {
	cin>>k>>n>>s;
	Try(1,1,0) ;
	cout<<dem;

}
