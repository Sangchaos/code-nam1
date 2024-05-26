#include <iostream>
#include <vector>
using namespace std ;

vector<int> danhsach[1001] ;
bool used[500] = {0};
int dinh , canh ;

void DFS(int i) {
    cout<<i<<" ";
    used[i] = true;
    for (int x = 0; x < danhsach[i].size(); x++) {
        if (!used[danhsach[i][x]])
        DFS(danhsach[i][x]) ;
    }
}
int main() {

    cin>>dinh>>canh;
    for (int i = 1;i<=canh;i++) {
        int m, n ; cin>>m>>n;
        danhsach[m].push_back(n) ;
        danhsach[n].push_back (m) ;
    }
    DFS(1) ;
}


