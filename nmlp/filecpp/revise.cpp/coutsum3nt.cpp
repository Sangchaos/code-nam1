#include<iostream>
#include<math.h>

using namespace std;

bool ktra ( int n) {
    if (n<2) {
        return false;
    }
    for (int i=2; i<(n) ; i++) {
        if (n%i==0)
        return false ;
    }
    return true ;

}
int main() {
    int n,a, b, c ;
    cout<<"nhap gioi han = ";
    cin>>n;
    for (int i=n;i>=n-14; i--) { 
        if (ktra(i)) {
        c=i;

       }
    }
    for (int i=2; i<=n;i++) {
        if (ktra(i))
        cout<<i<<" ";
    }
  
    
    

    
    
   
     return 0;
}