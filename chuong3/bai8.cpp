#include <iostream>

using namespace std ;

int main() {
    int n=0, A;
    cin>>A;
    float s=0 ;
    while (s <= A)
    {
        n++;
        s+= (float) 1/ n;
    }
    cout<<n;
}