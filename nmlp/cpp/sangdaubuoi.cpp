#include <iostream>
using namespace std;
void dem (int n){
    int dem[]={0};
    for (int i=0; i<10; i++){
        if (n=i){
            dem[i]++;
        }
    }
    cout << dem[i] << " ";
}

int main(){
    int n; cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    for (int i=0; i<n; i++){
        dem(a[i]);
    }
    return 0;
}