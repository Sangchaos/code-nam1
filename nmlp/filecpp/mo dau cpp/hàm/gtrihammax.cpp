#include <iostream>
using namespace std;
int maxtrongarr( int arr[1000], int n){
    int maxg= arr[1];
    for( int i=1; i<=n; i++){
        if(arr[i]> maxg){
        maxg= arr[i];}
    }
    return maxg;
}
int main(){
    int arr[1000];
    int n;
    cin>>n;
    for( int i=1; i<=n; i++) {
        cin>> arr[i];
    }
    cout<<maxtrongarr(arr, n);
    return 0;
}
