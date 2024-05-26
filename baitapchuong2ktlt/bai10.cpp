// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>
#include <algorithm>
using namespace std ;
void cong (string s1, string s2, string kq) {
    while (s1.length() <s2.length()) s1 = "0"+s1 ;
    while (s2.length() <s1.length() ) s2 = "0"+ s2 ;
    int n = s1.length() ;
    int nho = 0;
    for (int i = n-1 ;i>=0 ;i--) {
        int m = s1[i]- '0' ;
        int p = s2[i]- '0' ;
        int tmp = m + p + nho ;
        kq+= (tmp%10 + '0' );
        if (tmp >=10 ) 
            nho =1 ;
        else 
            nho =0 ;
    }
    if (nho == 1) {
        kq+= nho + '0' ;
    }
    reverse(kq.begin() , kq.end()) ;
    cout<<kq<<endl;
}
void hieu(string s1, string s2, string kq) {
     while (s1.length() <s2.length()) s1 = "0"+s1 ;
    while (s2.length() <s1.length() ) s2 = "0"+ s2 ;
    int n = s1.length() ;
    int nho = 0;
    for (int i = n-1 ;i>= 0;i--) {
        int m = s1[i]- '0' ;
        int p = s2[i]- '0' ;
        int tmp = m-p - nho ;
        kq+= abs(tmp) + '0' ;
        if (tmp < 0) 
        nho =1 ;
        else 
        nho =0 ;
    }
    if (nho == 1) {
        kq+= '-' ;
    }
    reverse(kq.begin(), kq.end()) ;
    cout<<kq ;
}
int main() {
    string s1, s2, kq="" ;
    cin>>s1>>s2 ;
    cong(s1, s2, kq) ;
    hieu(s1,s2, kq) ;
}