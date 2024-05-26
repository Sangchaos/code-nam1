// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>
using namespace std;
int n , x[500] ;

void ql(int i) {
    for (int j =0 ;j<=1;j++) {
        x[i]=j;
        if (i==n)
        {
            for (int u=1 ;u<=i;u++) {
                cout<<x[u]<<" ";
            }
            cout<<endl;
        }
        else ql(i+1) ;     
    }
}
int main() {
    cin>>n ;
    ql(1) ;
}