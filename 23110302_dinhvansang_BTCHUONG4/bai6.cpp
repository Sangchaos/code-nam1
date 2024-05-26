// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream> 

using namespace std;

int dequy(int n) {
    if (n==1 || n==0) 
    return 1 ;
    return dequy(n-1) + dequy(n-2) ;

}
int main() {
    int n; cin>>n;
    cout<<dequy(n) ;
}