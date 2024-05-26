// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>
using namespace std ;
int n, a[500] ;
int m ;

long long prime[1000001];

void sangnt() {
    for (int i = 0;i<=1000001;i++) {
        prime[i] =1 ;
    }
    prime[0] = prime[1] =0 ;
    for (int i =2 ;i<=1000 ;i++) {
        if (prime[i]==1) {
            for (int j = i*i ;j<=1000001; j+=i) {
                prime[j]=0;
            }
        }
    }
}

void Try(int i) {
    if (n==i) {
        return ;
    }
    if (a[i] < m && prime[a[i]]==1) {
        m = a[i] ;
    }
    Try(i+1) ;
}
int main() {
    sangnt();
    cin>>n;
    for (int i =0 ;i<n ;i++) {
        cin>>a[i] ;
    }
    m = INT32_MAX ;
    Try(1) ;
    cout<<m;
}

