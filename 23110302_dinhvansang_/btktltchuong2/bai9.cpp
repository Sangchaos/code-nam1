// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>

using namespace std ;

bool nhuan(int y) {
    if ( y %400== 0 || (y%4== 0&& y%100 !=0) ) 
    return true ;
    else
    return false ;
}

int ngay(int m, int y) {
    switch (m)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12 :
    return 31 ;
    case 4: case 6 : case 9: case 11 :
    return 30 ;
    case 2 :
    if (nhuan(y)) return 29 ;
    else return 28 ;
    }
}

int ngayhoply(int d, int m, int y) {
    
    if( d <= ngay(m, y) && m >0 && m<= 12) 
    return 1 ;
    else
    return 0;
}
int nam(int y) {
    if (nhuan(y)) return 366 ;
    else return 365 ;
}
int ngaytrongnam (int d, int m, int y) {
    int tong= 0 ;
    for (int i=1 ; i<= m-1;i++) {
         tong+= ngay(i, y) ;
    }
    tong+=d ;
    return tong ;
}
int thutrongtuan(int d, int m, int y) {
    int tong=0 ;
    for (int i =1 ;i<= y-1 ;i++) {
        tong+=nam(i) ;
    }
    tong+= ngaytrongnam( d, m, y) ;
    int k =1;
    for (int i =1 ;i<= tong; i++) {
        k++ ;
        if( k==9) {
            k=1 ;
            k++;
        }
    }
    if(ngayhoply(d, m, y))
    return k ;
}
int main() {
    int d ,m ,y ;
    cin>>d>>m>>y ;
    cout<<thutrongtuan(d, m, y) ;
}

