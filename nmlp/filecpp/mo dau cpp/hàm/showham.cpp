#include<iostream>
using namespace std;

void showlonhon4( string arr[1000], int n ){
    for(int i=1; i<=n ;i++ ){
        if( arr[i].size()> 4){
            cout<<arr[i]<<" ";
        }
    }
}
int main()
{
    int n;
    string arr[100];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
   showlonhon4(arr,n);
    return 0;
}