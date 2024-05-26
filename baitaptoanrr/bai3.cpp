#include <iostream>
#include <vector>
#include<limits>
using namespace std ;
int n, K, arr[100] ;
vector<vector<int>> cauhinh;

void khoitoa(int a[],int k) {
    for (int i =1 ;i<=k;i++) {
        a[i] = i ;
    }
} 
void nhap () {
    for (int i =1 ;i<=n ;i++) {
        cin>>arr[i] ;
    }
} 
void sinhtohop(int a[], int k ,int &end) {
    int i =k;

        while ( i>0 && a[i] == n-k+i) {
            i-- ;
        }
        if (i== 0) {
            end = 1 ;
        }
        else {
            a[i]++ ;
            for (int j = i+1 ;j<=k;j++) {
                a[j] = a[j-1] +1 ;
            }
        }
    
}

int main() {
    int tongmax = INT32_MIN, vtmax=-1;
    cin>> n ;
    nhap() ;
    cin>>K;
    for (int k =n ; k>=1 ;k--) {
        int a[100] , end =0 ;
        khoitoa(a, k) ;
        while (end==0) {
            vector<int> tmp ;
            int tong =0 ;
            for (int j=1 ;j<=k ;j++) {
                tmp.push_back(arr[a[j]]) ;
            }
            cauhinh.push_back(tmp) ;
            sinhtohop(a,k, end);
        }
    }
    for (int i = 0;i< cauhinh.size();i++) {
        int tong =0 ;
        for (int x : cauhinh[i]) {
            tong+= x ;
        }
        if (tong > tongmax && tong < K) {
            tongmax = tong ;
            vtmax = i;
        }
    }
    cout<<"so max be hon k la: "<<tongmax<<endl;
    for (int x: cauhinh[vtmax]) {
        cout<<x<<" ";
    }
    return 0 ;
}