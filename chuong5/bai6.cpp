#include <iostream> 

using namespace std ;

int main () {
    freopen ("input.txt", "r", stdin) ;
    freopen ("output.txt", "w", stdout) ;
    string a;
    cin>>a;
    int i =0; 
    int n = a.length();
    while (i<n)
    {
        
        if ( a[i] + '0' != a[(n-1)] + '0') {
            cout<<"khong" ;
            return 0;
        }
        i++ ;
        n--;
    }
    cout<<"co";
    
}