#include<iostream>
using namespace std ;
int main() {
    int n ;
    cout<<"nhap n = ";
    cin>>n;
    int giai_thua =1;
    for (int i=1; i<=n;i++) {
        giai_thua *=i ;
    }
    cout<<n<<"! = "<<giai_thua;
    return 0;

}
