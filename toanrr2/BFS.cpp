#include <iostream>
#include <vector>
#include <queue> 
using namespace std ;
vector<int> danhsach[1001] ;
int dinh , canh ;
bool used[500] ;

void BFS (int i) {
    queue<int> a ;
    a.push(i) ;
    used[i] = true ;
    while (!a.empty())
    {
        int x = a.front() ;
        a.pop() ;
        cout<<x<<" " ;
        for (int y: danhsach[x]) {
            if (!used[y]) {
                a.push(y) ;
                used[y] = true ;
            }
        }
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
    for (int i =1 ;i<=dinh;i++) {
        for (int x : danhsach[i]) {
            cout<<x<<" " ;
        }
        cout<<endl;
    }
    BFS(1);
}

