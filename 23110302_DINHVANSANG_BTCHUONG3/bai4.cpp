// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  
#include <iostream>

using namespace std ;

int main() {
    int n ;
    cin>>n;
    long long s=0;
    long long gt = 1 ;
    for(int i=1;i<=n;i++){
        gt *= i ;
        s += gt ;
    }
    cout<<s;
}