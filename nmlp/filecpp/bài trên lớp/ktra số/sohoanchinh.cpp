#include<iostream>
using namespace std ;
int main() {
    int n, i;
    int sumi=0;
    cin>>n;
    for(i=1; i<n;i++) {
        if( n%i==0){
        sumi+=i;
       // cout<<i<<" "<<endl;
        }
    }
 if(sumi==n){
    cout<<"dung";
 }
 else 
 {
    cout<<"sai";
 }
   

  
    
}
