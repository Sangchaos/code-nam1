#include <iostream> 
#include <cmath>

using namespace std ;

int main() {
    long long int n = 100000;
    int a[n] = {0}; 
    a[0]=a[1]= 1;
    for (int i = 2 ;i<=sqrt(n); i++) {
        if (a[i]==0) {
            for (int j = 2*i;j<=n;j+= i) {
                a[j]=1 ;
            }
        }
    }
    int x ; cin>>x;
    for (int i =0 ;i<= x;i++) {
        if (a[i]==0) 
        {
            cout<<i<<" ";
        }
    }

}