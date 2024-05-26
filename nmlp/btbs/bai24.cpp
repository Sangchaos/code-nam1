#include<iostream>
#include<ctime>
#include<cstdlib> 
 ;

using namespace std ;

void randoms (int arr[] ) {
    srand (time(0)) ;
    for (int i =0;i<20 ;i++) {
        arr[i]= rand() %10 ;
    }
    for (int i=0 ;i<20;i++) {
        cout<<arr[i]<<" " ;
    }
}
void demso (int arr[]) {
    int dem[10] ={0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 };
    
    for (int i=0;i<20 ;i++) {
        dem[arr[i]]++;
    }
    for (int i=0;i<10;i++) {
        cout<<"so "<<i<<" xuat hien "<<dem[i]<<" lan"<<endl;
    }
}
int main () {
    int arr[20] ;
    randoms(arr) ;
    cout<<endl;
    demso(arr) ;
}
