#include <iostream>

using namespace std ; 

int ham(int x) {
    int y = x+4 ;
    return y ;
} 
int hamnguoc(int y) {
    int x = y-4 ;
    return x ;
}

int main() {
    int x , y ;
    cin>>x>>y ;
    cout<<ham(x) ;
    cout<<endl;
    cout<<hamnguoc(y) ;
}