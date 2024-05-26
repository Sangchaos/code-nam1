#include <iostream>
#include <vector>
using namespace std;

void nhap (int &n) {
	int n ;
	cin>>n;
	vector<int> v;
	for (int i=0; i<n;i++) {
		int x ; 
		cin>>x;
		v.push_back(x) ;
	}
	for (int i =0;i<n;i++) {
		cout<< v[i]<<" ";
	}
}

int main() {
	int n;
	nhap(n);
	return 0; 
} 
