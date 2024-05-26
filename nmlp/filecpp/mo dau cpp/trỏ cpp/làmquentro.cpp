#include<iostream>
using namespace std;
 int main(){
    int num =9 ;
    int*p1 =&num;
    char*p2 =(char*)&num;
    double*p3=(double*)&num;
    cout<<" size p1"<< sizeof(p1)<< endl;
    cout<<" size p2"<< sizeof(p2)<< endl;
    cout<<" size p3"<< sizeof(p3)<< endl;
    return 0;
 }