#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    float s=0;
    cin>>n; 
    for (int i=0; i<=n; i++) {
        s+= 1.0 / (2*i+1) ;
    }
    cout<<(float)s;

}