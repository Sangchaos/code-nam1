#include <iostream>

using namespace std;
bool ktra (int n) {
    int dao=0;
    int k =n ;
    while ( k> 0)
    {
        dao= dao *10 ;
        dao += k %10 ;
        k= k/10 ;
    }
    while ( n %10 == 0) {
        n=n /10 ;
    }
    if ( n==dao) 
    return true ;
    else return false ;
    
    
}
int main() {
    int n ;
    cin>> n;
    if (ktra(n)) {
        cout<<"YES";
    }
    else cout<<"NO";
}