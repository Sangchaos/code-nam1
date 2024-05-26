#include <iostream>
using namespace std ;

int main() {
    int n, h , v1=-1, v2=-1; 
    cin>>n>>h;
    int s[100][100] ;
    for (int i =0 ;i< n;i++) {
        for (int j =i+1; j< n; j++) {
            s[i][j]=1;
        }
    }
    while (h >0)
    {
        int a, b;
        cin>>a>>b;
        if ( a > b) {
            swap (a, b) ;
        }
        s[a-1][b-1] = 2 ;
        h-- ;
    }
    bool flag = false ;
    for (int i =0 ;i< n;i++) {
        for (int j =i+1; j< n; j++) {
            if ( s[i][j]==1) {
                v1 = i ;
                v2= j ;
                flag = true ;
                break ;               
            }
        }
        if (flag ==true) {
            break ;
        }
    }
    flag = false ;
    for (int i =0 ;i< n;i++) {
        for (int j =i+1; j< n; j++) {
            if ( s[i][j]==1 && i != v1 && j !=v2 && i!=v2  ) {
                flag = true ;
                break ;
            }
        }
        if (flag ==true) {
            break ;
        }
    }
    if(flag == true ) {
        cout<<"YES";
    }
    else 
    cout<<"NO" ;
}