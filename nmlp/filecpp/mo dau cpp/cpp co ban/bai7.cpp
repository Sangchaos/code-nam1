#include <iostream>

using namespace std;
int main(){
    int j,i,m,n ;
    int mang[100][100] ;
    cin>>m>>n ;
    for (i=0 ; i<=n; i++) {
        for( j=0; j<=m ; j++){
            cin>> mang[i][j];
        }
    }
  
     for (i=0 ; i<=n; i++) {
        for( j=0; j<=m ; j++){
            if( mang[i][j]% 5==0)
            cout << mang[i][j] <<" ";
        }
    }
    
     return 0;
}






