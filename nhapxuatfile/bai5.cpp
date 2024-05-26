// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  


#include <iostream>
#include  <fstream>
#include <cmath>

using namespace std ;

bool nt (int n) {
    if (n<2)
    return false ;
    for (int i=2 ;i<= sqrt(n); i++) {
        if (n%i==0)
        return false ;
    }
    return true ;
}

int demntfile(ifstream &output) {
    int tam, dem =0; 
    while (output >> tam) {
        if (nt (tam)) {
            dem++ ;
        }
    }
    return dem ;
}

int main() {
    ifstream output ;
    output.open("D:\\nhapxuatfile\\bai.txt")  ;
    cout<<demntfile(output) ;
    output.close() ;
}