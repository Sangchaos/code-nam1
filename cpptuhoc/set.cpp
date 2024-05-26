#include <iostream>
#include <set>

using namespace std ;

int main() {
    set<int> arr ;
    int n ; cin>>n ;
    while( n > 0) {
        int s; cin>>s ;
        arr.insert(s) ;
        n--;
    }
    for (int x : arr ) {
        cout<<x<<" ";
    }
}