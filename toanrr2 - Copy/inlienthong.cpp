#include <iostream> 
#include <vector>

using namespace std ;

vector<int> a[1000] ;
int dinh , canh ;
int daxet[1000] = {0} ;
int lienthong[1000] ;
int dem =0 ;

void DFS (int i) {
    daxet[i]= 1;
    lienthong[i] = dem ;
    for (int x =0 ; x < a[i].size();x++) {
        if (daxet[a[i][x]]==0)       
            DFS(a[i][x]);       
    }
}

int main() {
    
    cin>>dinh>>canh;
    for (int i =0 ;i<canh; i++) {
        int m ,n ; cin>>m>>n ;
        a[m].push_back(n) ;
        a[n].push_back(m) ;
    }
    for (int i =1 ;i<=dinh;i++ ) {
        if (daxet[i]==0) {
            dem++ ;
            DFS(i) ;
        }
    }
    for (int i =1 ;i<=dinh;i++) {
        cout<<i<<" ";
        if (lienthong[i] < lienthong[i+1]) cout<<endl;

    }
    
}
