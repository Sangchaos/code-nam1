#include <iostream>
using namespace std ;
int ham(int x) {
    int y ;
    y = x+ 2 ;
    return y ;
}
int main() {
    int x; cin >> x ;
    cout<<ham(x) ;
}