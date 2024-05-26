// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>
using namespace std ;

int gt(int n) {
    if (n==1) return 1 ;
    else return n*gt(n-1) ;
}
int main() {
    int n;
    cin>>n;
    cout<<gt(n)<<"!" ;
}
