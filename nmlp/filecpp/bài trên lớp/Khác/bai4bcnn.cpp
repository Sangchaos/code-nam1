#include<iostream>
using namespace std ;
int main(){
    int i, a, b;
    cout<<"nhap a = ";
    cin>>a;
    cout<<"nhap b = ";
    cin>>b;
    for(i=1; i<=(a*b); i++){
        if(i%a==0 && i%b==0){
            cout<<"boi chung nho nhat la: "<<i;
            break;
        }
    }
}