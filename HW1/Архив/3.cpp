#include <iostream>
using namespace std;
int used[10000];
int a[10000][10000];
int n;
void dfs(int v)
{
	used[v]=1;
	for(int i=1;i<=n;i++)
	{
		
		if(a[v][i]==1 && used[i]==0)
			{	
				dfs(i);
			}
	}
	return;
}
int main()
{
	
	cin>>n;
	for(int i=1; i<=n;i++)
	{
		used[i]=0;
		for (int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	int v,u;
	cin>>v>>u;
	dfs(v);
	if(used[u]==1)
	{
		cout<<"POLTOS";
	} else 
	
		cout<<"DAUREN";
	
	return 0;
}