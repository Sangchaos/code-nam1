#include<iostream>
using namespace std ;
int main(){
    int a, b, c, i;
    cout<<"nhap a = ";
    cin>>a;
    cout<<"nhap b = ";
    cin>>b;
    cout<<"nhap c = ";
    cin>>c;
    for( i=(a+b+c); i>0; i--){
        if ( a%i==0 && b%i==0 && c%i==0){
            cout<<"uoc chung lon nhat cua ba so a b c la: "<<i;
            break;
        }

    }
    return 0;
}