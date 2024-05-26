// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>
#include  <fstream>
using namespace std ;
void lay(int a[], int &n, ifstream &laytu) {
    laytu>> n;
    for (int i =0 ;i<n ;i++) {
        laytu>>a[i] ;
    }
}
void soft1 (int a[], int n, ofstream &xuat) {
    for (int i =0 ;i<n ;i++) {
        for (int j =i ;j<n ;j++) {
            if (a[i]> a[j]) {
                swap (a[i], a[j]) ;
            }
        }
    }
    for (int i =0 ;i<n ;i++) {
        xuat<<a[i]<<"   " ;
    }
    xuat<<endl;
}
int main() {
    int a[100] , n ;
    ifstream laytu ;
    laytu.open("D:\\nhapxuatfile\\guivao.txt") ;
    lay(a, n, laytu) ;
    laytu.close() ;

    ofstream xuat ;
    xuat.open("D:\\nhapxuatfile\\bai.txt") ;
    soft1(a, n, xuat) ;
    xuat.close() ;
    return 0;



}
