// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  
// PRTE230385_05
#include <iostream>
#include <fstream> 
using namespace std ;

struct ps 
{
    int t;
    int m ;
};

bool sosanh(ps a, ps b) {
    int x = a.t * b.m - b.t * a.m;
    return x > 0;
}


int timkiem(ps A[], int n) {
    int vt = 0;
    for (int i = 1; i < n; i++) 
    {
        if (A[i].t * A[vt].m > A[vt].t* A[i].m) 
        {
            vt = i;
        }
    }
    return vt;
}


int main() {
    ifstream laytu ;
    ps A[1000] ;
    int n ;
    laytu.open("cau2_input.txt" ) ;
    laytu>>n;
    for (int i =0 ;i<n;i++) {
        laytu>>A[i].t>>A[i].m ;
    }
    laytu.close() ;
    ofstream out ;
    out.open("cau2_output.txt") ;
    out<<timkiem(A ,n) ;
    out.close() ;
    out.close() ;
    return 0 ;
}
