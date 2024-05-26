// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005
// PRTE230385_05

#include <iostream>
#include <cmath>

using namespace std; 

int tong(int n ) {
    int sum =0 ;
    if (n % 2 ==1) {
        sum += n%10; 
    }
    if (n==0)
    return 0;
    
    return tong(n/10) +sum;
}
int main() {
    int n ;
    cin>>n;
    cout<<tong(abs(n)) ;
}