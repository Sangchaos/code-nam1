#include<iostream>
using namespace std;
int main() {
    int n, x, i;
    long long  lt=1;
    long long tong =0;
    cout<<"nhap x = ";
    cin>>x;
    cout<<"nhap n = ";
    cin>>n;
    for (i=1; i<=n; i++){
        lt*=x;
        tong+=lt; 
    }
    cout<<"tong cac luy thua = "<<tong;
    return 0;
}
