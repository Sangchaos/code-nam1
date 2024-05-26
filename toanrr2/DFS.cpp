#include <iostream>
#include <vector>
using namespace std ;

vector<int> danhsach[1001] ;
bool used[500] = {0};
int dinh , canh ;

void DFS(int i) {
    cout<<i<<" ";
    used[i] = true;
    for (int x : danhsach[i]) {
        if (!used[x])
        DFS(x) ;
    }
}
int main() {
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout) ;
    cin>>dinh>>canh;
    for (int i = 1;i<=canh;i++) {
        int m, n ; cin>>m>>n;
        danhsach[m].push_back(n) ;
        danhsach[n].push_back (m) ;
    }
    for (int i =1 ;i<= canh;i++) {
        for (int x : danhsach[i]) {
            cout<<x<<" " ;
        }
        cout<<endl;
    }
    DFS(1) ;
}


