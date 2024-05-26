#include<iostream>
using namespace std ;
void so_hoan_hao (int n) {
    int tong=0;
    for (int i=1; i<n; i++ ){
        if (n%i==0)
        tong+= i;
    }
    if (n==tong) 
    cout<<"day la so hoan hao";
    else 
    cout<<"day ko la so hoan hao";

}
int main(){
    int n; 
    cin>>n;
    so_hoan_hao (n);
}
