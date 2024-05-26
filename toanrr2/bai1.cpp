#include <bits/stdc++.h>
using namespace std;
const int N=1001;
char a[N][N];
int f[N][N];
int n,m;
bool check=false;
bool hoa=false;
int main (){
    cin>>n>>m;
    queue <pair<int, int>> q;
    memset(f,-1,sizeof(f));
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin>>a[i][j];
            if (a[i][j]=='1'){
                hoa=true;
            }
            if (a[i][j]=='2'){
                q.push({i,j});
                f[i][j]=0;
            } 
        }
    }
    if (hoa==false){
        cout<<0<<endl;
    }
    else{
    pair <int, int> last;
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
    while(!q.empty()){
        pair <int, int> hoang=q.front();
        q.pop();
        for (int k=0; k<4; k++){
            int x=hoang.first+dx[k];
            int y=hoang.second+dy[k];
            if (x>=0&&x<n&&y>=0&&y<m&&a[x][y]=='1'&&f[x][y]==-1){
                f[x][y]=f[hoang.first][hoang.second]+1;
                q.push({x,y});
                last={x,y};
                check=true;
            }
        }
    }
    if (check==true) cout<<f[last.first][last.second];
    else cout<<-1;
    }
    return 0;
}