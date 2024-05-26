#include <iostream>

using namespace std;

int tongcuamang( int mang[1000], int n){
    int tong=0;
    for(int i=0 ; i< n; i++){
        tong+= mang[i];
    }
    return tong ;
}
int main ()
{
    int mang[1000];
    int n;
    cin>> n;
    for( int i=0; i<n; i++){
        cin>> mang[i];
    
    }
cout<< tongcuamang ( mang , n);
return 0;
}