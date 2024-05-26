#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long gt=1;
    double s=0;
    for(int i=1;i<n;i++){
        gt*=i;
        s+=1.0/gt;
    }
    cout<< fixed << setprecision(4)<< s ;
}