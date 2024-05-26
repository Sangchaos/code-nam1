// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std ;
void xuatfile (int a, int b, int c, ofstream &xuat)  {
    float x1, x2 ;
    if (a== 0) {
        xuat<<"phuong trinh bac nhat." ;     
    }
    int d= b*b - 4 * a* c ;
    if ( d<0) 
    xuat<<"phuong trinh vo nghiem," ;
    else if (d==0) {
        x1 = x2 = (float) -b / (2*a ) ;
        xuat<<x1 ;
    }
    else {
        x1 =(float) (-b + sqrt(d)) / (a*2) ;
         x2 =(float) (-b - sqrt(d)) / (a*2) ;
         xuat<<x1<<" "<<x2 ;
    }
 
}
int main() {
    ifstream laytu ;
    int a, b, c ;
    laytu.open("D:\\nhapxuatfile\\guivao.txt") ;
    laytu>>a>>b>>c ;
    laytu.close() ;
    ofstream xuat ;
    xuat.open("D:\\nhapxuatfile\\bai.txt")  ;
    xuatfile(a, b, c, xuat ) ;
    xuat.close() ;
    return 0 ;

}
 
