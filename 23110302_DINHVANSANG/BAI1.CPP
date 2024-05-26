// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  
// PRTE230385_05
#include <iostream>
#include <fstream>
using namespace std ;


int find(int a[], int &n, int &x, fstream &f) {
    f.open ("cau1_input.txt", ios:: in | ios:: out) ;
    f>>n>>x ;

    for (int i =0 ;i<n ;i++) {
        f>>a[i] ;
    }
    int left = 0 , right = n-1 ;
    int mid = (left + right) /2 ;
    while (left <= right) {
        if (x == a[mid]) 
        return mid ;
        else if (x > a[mid]) {
            left = mid+ 1 ;
            mid = (left + right) /2 ;
        }
        else {
            right = mid -1 ;
            mid = (left + right) /2 ;
        }
    }
    if (a[mid] !=x) 
    return -1;
    f.close() ;
} 

int main() {
    int a[1000] , n ,x ;
    fstream f, f2 ;
    f2.open("cau1_output.txt", ios:: out) ;
    f2<<find(a,n,x,f) ;
    f2.close() ;
    return 0;
}