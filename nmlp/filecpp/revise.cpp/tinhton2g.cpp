#include<iostream>
using namespace std ;
int main()
{
    int i, n;
    int tong=0;
    cout<<"n=";
    cin>>n;

    for(i=1; i<=n; i++){
        tong +=( i*i);
    }
      cout<< tong<< endl;
    

}

