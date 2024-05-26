#include<iostream>
using namespace std ;
int main() {
    int n;
    cout<<"n = ";
    cin>>n;
    for (int i=1; i<n;i+=2) {
        cout<<i*i<<" ";
    }
    return 0;
}