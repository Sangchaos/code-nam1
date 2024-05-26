// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>
#include <algorithm>
using namespace std ;
int n , a[500], x ;


int timnhiphan( int l, int r) {
    if (l<=r ) {
        int mid = (r+l) /2 ;
        if (x==a[mid])
        return mid ;
        else if (x < a[mid]) 
        return timnhiphan(l, mid -1) ;
        else 
        return timnhiphan(mid+1 , r) ;
    }
    else 
    return -1 ;

}
int main() {
    cin>>n>>x;
    for (int i =0;i<n;i++) {
        cin>>a[i] ;
    }
    sort(a, a+n) ;
    cout<<timnhiphan(0, n-1);
}