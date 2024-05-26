#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std ;

int main() {  
    int n ;
    cin>>n;
    string a ;
    while (n!=0)
    {
        int x = n%2 ;
        char m = x + '0' ;
        a+=m;
        n/=2 ;
    }
    reverse(a.begin(), a.end()) ;
    cout<<stoi(a);
    

}