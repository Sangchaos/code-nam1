#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"mhap n = ";
    cin>>n;
    while (n>0) {
        n=(float)n/2;
        cout<<n<<" ";
    }
}