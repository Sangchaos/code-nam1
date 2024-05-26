// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>
using namespace std ;

int main() {
    int n; cin>>n ;
    long long s =0 ;
    for (int i =1 ;i<= n;i++) {
        s+= (i*(i+1)) /2 ;
    }
    cout<<s;
}