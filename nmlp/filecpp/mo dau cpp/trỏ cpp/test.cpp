#include <bits/stdc++.h>
#include<string>
using namespace std ;
struct con_nguoi {
	string name;
	float point; 
};
int main(){
	con_nguoi lop[4] ;
	
	con_nguoi *top1= nullptr;
	for(top1= lop; top1<lop+4;top1++)
	cout<<(*top1).chieu_cao<< endl;

	return 0;
}
