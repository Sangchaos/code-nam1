// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>
using namespace std ;
int n, a[500] , x[500] , daxet[500] ={0};

void ql(int i) {
    for (int j =1 ;j<=n ; j++) {
        if (!daxet[j]) {
            x[i] = j ;
            daxet[j]=1 ;
            if (i==n) {
                for (int u =1 ;u<=i;u++) {
                    cout<<x[u]<<" ";
                }
                cout<<endl;
            }
            else {
                ql(i+1) ;
            }
        daxet[j]=0;
        }
    }
}  

int main() {
    cin>>n;
    ql(1) ;
}