#include <bits/stdc++.h>
#define ll long long
#define MAX 100
using namespace std;

int a[MAX], x[MAX], ok=0;

void Nhap1C(int a[], int n){
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
}

void In(int n){
    for (int i=0; i<n; i++){
        if (a[i]!=0){
            cout << x[i] << " ";
        }
    }
    cout << endl;
}

void Sinh(int n){
    int i=n-1;
    while (i>=0 && a[i]==1){
        a[i]=0;
        i--;
    }
    if (i==-1) ok=1;
    else a[i]=1;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    memset(a, 0, sizeof(MAX));
    int n; cin >> n;
    Nhap1C(x, n);
    while (!ok){
        In(n);
        Sinh(n);
    }
    return 0;
}