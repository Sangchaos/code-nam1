#include<iostream>
 using namespace std;
  int tongmang( int arr[1000], int n){
    if(n==1) return arr[0] ;
    return arr[n-1]+ tongmang(arr, n-1);
  }
int main ()
{
    int n;
    int arr[1000];
    cin>>n;
    for (int i=0; i<n;i++){
        cin>> arr[i];
    }
    cout<<tongmang(arr,n);
    return 0;
}