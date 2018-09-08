#include <iostream>
using namespace std;
int a[1000][1000];
int used[1000];

void dfs(int v)
{
	used[v]=1;
	if(a[v][i]==1 && used[i]==0)
		{	
			dfs(i);
		}

}
int n;
int main()
{
	cin>>n;
	for(int i=1,i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
		int u,v;
		cin>>u>>v;

	}
	return 0;
}