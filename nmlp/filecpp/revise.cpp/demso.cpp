#include<iostream>
using namespace std ;
int main () {
    int n ,j;
    int dem;
    cout<<"nhap n = ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
       do{
            cout <<"Nhap gia tri arr[" << i << "] = ";
            cin >> arr[i];
            }
        while (arr[i]>9);
    }

    for (j =0; j<=9; j++) {
        dem=0;
        for ( int i =0; i<n ; i++) {
            if (arr[i] ==j)
            dem++;
        }
        if (dem!=0)
        cout<<dem<<" so "<<j<<endl;
    }
    
}