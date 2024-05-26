#include <iostream>
using namespace std ;

int main() {
    int n; cin>>n ;
    double s =0 ;
    for (int i =1 ;i<= n;i++) {
        s+=(double) 1/ ((i*(i+1)) /2) ;
    }
    cout<<s;
}