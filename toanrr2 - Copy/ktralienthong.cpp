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
    for (int x : a[i]) {
        if (daxet[x]==0)       
            DFS(x);
        
    }
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout) ;
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
    for (int i =1 ;i<dinh;i++) {
        if (lienthong[i] < lienthong[i+1]) {
            cout<<"do thi khong lien thong" ;
            return 0 ;
        }        
    }
    cout<<"do thi lien thong";
    return 0;
    
}