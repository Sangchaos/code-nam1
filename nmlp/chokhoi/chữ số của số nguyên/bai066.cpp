#include<iostream>
using namespace std;
int main(){
    int n;
    int dem=0;
    cout<<"nhap n = ";
    cin>>n;
    while(n>0) {
        if ((n%10) %2 ==1) {
        dem++;
        }
        n=n/10;
    }
    if(dem!=0)
    cout<<"co chu so le";
    else 
    cout<<"ko co chu so le";
    return 0;
}