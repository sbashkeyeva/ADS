#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
int used[1000];
int a[1000][1000];
int predok[1000];
vector<int> path;
void dfs(int v, int p)
{	
	predok[v] = p;
	used[v]=1;
	for(int i=1;i<=n;i++)
	{
		
		if(a[v][i]==1 && used[i]==0)
			{	
				dfs(i, v);
			}
	}
	
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	int a, b;
	cin>>a>>b;
	dfs(a, -1);
	int x = b;
	while(predok[x] != -1){
		path.push_back(x);
		x = predok[x];

	}
	path.push_back(a);
	reverse(path.begin(), path.end());
	for(int i = 0; i < path.size(); ++i){
		cout << path[i] << " ";
	}
	return 0;
}