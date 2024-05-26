#include<iostream>
#include<math.h>
using namespace std ;
int main() {
    int i, n;
    cin>>n;
    float s=0;
    float m=0;
    for(i=1; i<=n; i++)
    {
        m+=i ;
        s+= 1.0 /m ;
    }
    cout<<s;
    return 0;
}