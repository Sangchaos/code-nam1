#include <iostream>
using namespace std ;
void show() {
    for ( int i=1 ;i<=100; i++) {
       if(i%3==0 &&i%5!=0 ) {
        cout<<i<<" ";
       }
    }
}
int main() {
show() ;
return 0;
}