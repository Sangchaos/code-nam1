#include <bits/stdc++.h>
using namespace std ;
int max(int *ptr, int n) {
   int gmax= ptr[0];
    for(int i=0; i< n ;i++){
        if(ptr[i]> gmax ) {
            gmax= ptr[i];
        }        
    }
    return gmax;
}
int main()
{
    int n;
    int arr[100];
    cin>> n;
    for(int i=0; i<n; i++) {
        cin>> arr[i];
    }
    cout<< max(&arr[0], n) ;
    return 0;
}