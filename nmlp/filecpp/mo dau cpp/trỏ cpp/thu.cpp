#include <bits/stdc++.h>
using namespace std;

void sang1( int &x){ 
    x+=2;
}

void sang2( int *x){
    (*x)*= 2;
}

int main(){
    int n=100;
    sang1 (n);
    sang2(&n);
    cout<< n<< endl;







return 0 ; 
}