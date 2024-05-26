// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>
#include <fstream>
#include <ctime>
#include <stdlib.h>

using namespace std ;
void xuatf(int a[] , int &n, ofstream &in )  {
    in.open("D:\\nhapxuatfile\\guivao.txt") ;
    cin>>n ;
    srand(time(NULL)) ;
    for (int i =0; i< n ;i++) {
        a[i] = rand() %1001 ;
    }
    for (int i =0 ;i <n ;i++) {
        in<< a[i]<<"    " ;
        if ((i+1) %15==0)
        in<<endl ;
    }
    in.close() ;
}

void docxuat (ifstream &xuat) {
    int tmp,i=0;
    xuat.open("D:\\nhapxuatfile\\guivao.txt") ;
    while (xuat >> tmp) {
        cout<<tmp<<"   " ;
        i++;
        if (i %15== 0)
        cout<<endl; 
    }
    xuat.close() ;
}

int main() {
    ofstream in ;
    ifstream xuat;
    int a[1000] , n ;
    xuatf(a, n, in ) ;
    docxuat(xuat);
}