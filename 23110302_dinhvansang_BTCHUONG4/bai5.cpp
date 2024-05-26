// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>

using namespace std ;

long long int gt[20] ;

int main() {
    gt[0] = 1 ;
    for (int i =1 ;i<= 20 ;i++) {
        gt[i]= i * gt[i-1] ;
    }
   int n ,  k;
   cin>>n>>k;
   cout<<gt[n] /(gt[n-k]* gt[k]) ;
}