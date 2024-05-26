// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>
#include <fstream>

using namespace std ;

int timkiem(int a[], int &n, int &x, fstream &f) {
    f.open ("D:\\baitapchuong2ktlt\\input.txt", ios:: in | ios:: out) ;
    f>>n ;
    for (int i =0 ;i<n ;i++) {
        f>>a[i] ;
    }
    f>>x ;
    a[n] = x ;
    n++ ;
    int i =0 ;
    while(a[i] != x) {
        i++ ;
    }
    if (i < n-1) 
    return i ;
    else 
    return -1 ;
    f.close() ;
}

int main() {
    fstream f,f2 ;
    int a[100] , n ,x ;
    f2.open ("D:\\baitapchuong2ktlt\\output.txt", ios:: out) ;
    f2<<timkiem(a,n ,x, f) ;
    f2.close() ;
}