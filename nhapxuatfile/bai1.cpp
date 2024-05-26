// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>
#include <fstream>
using namespace std ;

int main() {
    ofstream inra ;
    inra.open ("D:\\nhapxuatfile\\guivao.txt") ;
    int a , b, c ;
    cin>>a>>b>>c ;
    inra <<a << " "<<b<<" "<<c<<endl ;
    inra.close() ;
}