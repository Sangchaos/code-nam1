#include <iostream>
using namespace std ;
int main () {
    int a ,b ;
    cout<<"nhap a = ";
    cin>>a ;
    int **arr ;
    arr = new int *[a] ;
    for (int i =0 ; i< a;i++) {
        cin>>b;
        arr[i] = new int [b]; 
    }
    for (int i =0; i<a ;i++) {
        for (int j=0; j<b; j++) {
            cout<<"arr["<<i<<"]["<<j<<"] = " ;
            cin>>arr[i][j] ;
        }
    }
    
    for (int i =0; i<a ;i++) {
        cout<<endl;
        for (int j=0; j<b; j++) {
            cout<<arr[i][j]<<" " ;
        }
    }
    for (int i =0 ; i< a;i++) {
         delete[]arr[i] ;
    }
     delete[]arr ;

}