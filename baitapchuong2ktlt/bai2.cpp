// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  
#include <iostream>
using namespace std ;


int find(int a[], int &n, int &x) {
    cin>>n;
    for (int i =0 ;i<n ;i++) {
        cin>>a[i] ;
    }
    cin>>x ;
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
} 

int main() {
    int a[1000] , n ,x ;
    cout<<find(a, n ,x) ;
}