#include<iostream>
using namespace std;

int soletrongmang (int mang[1000] ,int n) {
    int tongsole = 0;
    for ( int i=1; i<=n; i++){
        if (mang[i]%2==1){
            tongsole+= mang[i]; // đếm số là tốngle++
                                    // tổng là như trên 
        
        }
        
    }
return tongsole;
}
int main(){
    int mang[1000];
    int n; 
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin >> mang[i];
    }
cout<< soletrongmang(mang, n);
return 0;
}
