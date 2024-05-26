#include <iostream>

using namespace std ;

int main() {
    int n , q ;
    cin>>n>>q ;
    for (int i =1 ; i<=10 ;i++) {
        for (int j = n ;j<=q ;j++) {
            cout<<j<<"*"<<i<<"="<<i*j<<"    ";
        }
        cout<<endl;
    }
}