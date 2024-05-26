#include<iostream>
#include<vector>
#include<queue>
using namespace std;
const int arr = 1E4 + 1;
vector <int> a[arr];
int ch[arr], n = 8;
void bfs(int x)
{
	ch[x] = 1;
	queue <int> q;
	q.push(x);
	while ( !q.empty())
	{
		int u = q.front();
		q.pop();
		for (int i = 0; int v = a[u][i]; i++)
			if (ch[v] == 0)
			{
				ch[v] = 1;
				q.push(v);
			}
	}
}
bool check()
{
	int i = 1;
	while (ch[i] != 0)
		i++;
	if (i > n)
		return true;
	else
		return false;
		
}	
int main()
{
    
    freopen ("input.txt", "r", stdin) ;
    freopen ("output.txt", "w", stdout) ;

	int m;
	cin >> m;
        int x,y;
        for (int i = 1; i<=m; i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for (int i = 0; i <= n; i++) a[i].push_back(0);
		for (int i =0 ;i< arr;i++) {
			for (int k : a[i]) {
				cout<<k<<" ";
			}
			cout<<endl;
		}
	for (int i = 0; i < m; i++)
	{
		cout << "Adjacent vertices of vertex " << i << ": ";
        	for (int x : a[i]) 
				cout << x << " ";
		cout<<endl;
	}
    cout<<endl;
	bfs(1);
	if (check())
		cout<<"Do thi lien thong";
	else
		cout<<"Do thi khong lien thong";
	return 0;
}