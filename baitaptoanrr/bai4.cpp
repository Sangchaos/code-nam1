#include <iostream>
using namespace std ;

int n;

void khoitao (int a[], int k) {
    for (int i = 1 ;i<=k ;i++) {
        a[i]= i ;
    }
}
void sinh(int a[],int  k, int &final) {
    int i =k ;
    while (i>0 && a[i]==n-k+i ) {
        i-- ;
    }
    if (i==0) {
        final=1;
    }
    else {
        a[i]++;
        for (int j = i+1 ;j<=k ; j++) {
            a[j] = a[j-1 ] + 1;
        }
    }
}

int main() {
    int arr[100] ;
    int k;
    cin>>n;
    for (int i =1;i<=n;i++) {
        cin>>arr[i] ;
    }


    for (k =n ;k>=1;k--) {
        int a[100] ,final =0;
        khoitao(a, k);
        while (final ==0) {
            int dem =1;
            for (int i = 1 ;i<=k-1 ;i++) {
                if (arr[a[i]] <= arr[a[i+1]]) {
                    dem++ ;
                }
            }
            if (dem == k) {
                for (int y = 1 ;y<=k;y++) {
                    cout<<arr[a[y]]<<" " ;
                }
                return 0 ;
            }
            else {
            sinh(a, k, final) ;

            }
        }
    }
}