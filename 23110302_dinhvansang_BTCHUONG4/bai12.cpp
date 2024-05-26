// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int n , a[500] , x[500] ,k;
vector<vector<int>> cauhinh ;

bool cmp (vector<int> a, vector<int> b) {
   if (a.size() == b.size()) {
        return a<b;
   }
   return a.size() < b.size();
   }
   
void Try(int i, int bd) {
    for (int j =bd ;j<=n;j++) {
        x[i] =j ;
        if (i <= k) {
            vector<int> tmp ;
            for (int u = 1 ;u<=i;u++) {
                tmp.push_back(x[u]);
            }
            cauhinh.push_back(tmp) ;
        }
         Try ( i+1, j+1) ;
    }
}

int main() {
    cin>>k>>n;
    Try(1,1) ;
    sort(cauhinh.begin(), cauhinh.end(), cmp) ;

    for (vector<int> x : cauhinh) {
        for (int i =0 ;i< x.size();i++) {
            cout<<x[i]<<" ";
        }
        cout<<endl;
    }
}