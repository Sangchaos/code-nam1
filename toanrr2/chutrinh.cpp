#include <iostream> 
#include <stack>
#include <vector>

using namespace std ;
int dinh, canh ;
vector<int> a[1001] ;
stack<int> s ;
stack<int> ce; 

void euler() {
    while (!s.empty()) 
    {
        int x = s.top();
        if( !a[x].empty()) {
            int y = a[x][0];
            s.push(y);
            a[x].erase(a[x].begin());
            for (int k = 0 ;k < a[y].size() ;k++) {
                if (a[y][k] == x) {
                    a[y].erase(a[y].begin() + k);
                    break;
                }
            }
        }
        else {
            ce.push(x);
            s.pop();
        }
    }
}
int main() {
    freopen ("input.txt", "r", stdin) ;
    freopen ("output.txt", "w", stdout) ;
    cin>>dinh>>canh;
    for (int i =0 ;i<canh ;i++) {
        int m,  n;
        cin>>m>>n ;
        a[m].push_back(n);
        a[n].push_back(m);
    }
    // for (int i = 0 ;i<canh ;i++) {
    //     for (int x : a[i]) {
    //         cout<<x<<" " ;
    //     }
    //     cout<<endl;
    // }
    s.push(4) ;
    euler();
    while (!ce.empty()) {
        cout<<ce.top()<<" ";
        ce.pop();
    }
    return 0 ;
}
