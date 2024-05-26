#include <iostream>
using namespace std ;
bool ktra (int snt) {
    if (snt<2) 
    return false ;
 
    for (int i=2; i<snt; i++) {
        if (snt%i==0) {
            return false ;
        }
    }
    return true ;
}
void gtmin(int arr[]; int n; int min )



int main() {
    int n ;
    cout<<"nhap = ";
    cin>>n;
    if (ktra(n)) 
        cout<<"dung";
    else 
        cout<<"sai";
}