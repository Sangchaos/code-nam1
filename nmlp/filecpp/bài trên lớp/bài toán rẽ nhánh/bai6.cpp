#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"nhap n = ";
    cin>>n;
    if (n%5!=0 && n%6!=0)
        cout<<"day la so ko chia het cho ca 5 va 6 ";
    else 
        if (n%5==0 && n%6==0)
            cout<<"day la so chia het cho 5 va 6";
        else 
            cout<<"day la so chia het cho 5 hoac 6";
    return 0;
}