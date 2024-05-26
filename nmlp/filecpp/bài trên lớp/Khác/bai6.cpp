#include<iostream>
#include<math.h>
using namespace std ;
int main(){
    int n;
    int tong=0;
    do{
        cout<<"n = ";
        cin>>n;
        tong+=n; 
        if(n==0){
            cout<<"ket thuc"<<endl;
            break ;
        }

    }
    while (n>0) ;
    cout<<"tong cac so vua nhap la: "<<tong;
}