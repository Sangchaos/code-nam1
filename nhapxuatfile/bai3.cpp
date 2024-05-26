// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std ;

int main() {
    srand(time(NULL)) ;
    int n ; cin>>n ;
    int a[n];
    ofstream inra ;
    inra.open("D:\\nhapxuatfile\\guivao.txt") ;
    inra<<n <<endl ;
    for(int i =0 ;i< n;i++) {
        a[i] = rand() % 1001 ;
        inra<<a[i]<<"   " ;
    }
    inra.close() ; 

}