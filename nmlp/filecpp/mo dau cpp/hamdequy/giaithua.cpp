#include<iostream>
using namespace std;

int giai(int n){
    if(n==1) return 1;
    return n*giai(n-1) ;
}
int main (){
    int n;
    cin>>n;
    cout<<giai(n);
    return 0;
}