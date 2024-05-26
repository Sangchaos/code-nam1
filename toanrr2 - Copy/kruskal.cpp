#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;

struct canh{
    int x,y,w;
};

int d,c;
vector<int> ke[100];
vector<canh> dscanh;
int parent[100],sz[100];

int find(int u){
    if(u==parent[u]) return u;
    else return parent[u]=find(parent[u]);
}

bool Union(int a,int b){
    a=find(a);
    b=find(b);
    if(a==b) return false;
    if(sz[a]<sz[b]){
        parent[a]=b;
        sz[b]+=sz[a];
    }
    else{
        parent[b]=a;
        sz[a]+=sz[b];
    }
    return true;
}

void inp(){
    cin>>d>>c;
    for(int i=0;i<c;i++){
        int x,y,w; cin>>x>>y>>w;
        dscanh.push_back({x,y,w});
    }
    for(int i=1;i<=d;i++){
        sz[i]=1;
        parent[i]=i;
    }
}

bool cmp(canh a,canh b){
    return a.w<b.w;
}

void kruskal(){
    sort(dscanh.begin(),dscanh.end(),cmp);
    int ans=0;
    vector<canh> tree;
    for(int i=0;i<c;i++){
        if(tree.size() == d-1) break;
        if(Union(dscanh[i].x,dscanh[i].y)){
            tree.push_back(dscanh[i]);
            ans+=dscanh[i].w;
        }
    }
    if(tree.size() < d-1){
        cout<<"do thi khong lien thong.";
    }
    else {
        cout<<"do dai cay khung cuc tieu: "<<ans<<endl;
    }
}


int main(){

    inp();
    kruskal();
}

// 6 8
// 1 2 1
// 1 6 2
// 2 6 1
// 2 3 3
// 3 4 4
// 3 5 5
// 4 5 6
// 4 6 8
