#include <bits/stdc++.h>
using namespace std ;
void swap (int *x , int *y){
  int tep= *x ;
*x =*y ;
*y = tep;
}

int main() {
    int m= 1000;
    int n= 2000;
    swap(&m,&n) ;
    cout<<m<<" "<< n;
    return 0;
}

