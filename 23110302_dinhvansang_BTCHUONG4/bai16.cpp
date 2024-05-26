// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>
using namespace std ;

int n , a[500][500] , x[500] , luu = INT16_MAX, cmin;
int daxet[500], tong =0;

void ql (int i) {
    for (int j =1 ;j<=n;j++) {
        if (!daxet[i]) {
            x[i] =j;
            daxet[i]=1;
            tong+=a[i-1][i] ;
            if(i ==n ) {
                luu = min(luu, tong + a[n][1]);
            }
            else if (tong + (n-i+1)* cmin < luu){
                ql(i+1) ;
            }
                daxet[i]=0;
                tong-=a[i-1][i];
        }
    }
}
int main() {
    cin>>n;
    for (int i=1;i<=n;i++) {
		for (int j=1;j<=n;j++) {
			cin>>a[i][j];
            if (a[i][j]!= 0) 
            cmin= min (cmin , a[i][j]) ;
		}
	}
    ql(1) ;
    cout<<luu;
}