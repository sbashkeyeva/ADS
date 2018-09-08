#include <iostream>
using namespace std;
int a[1000][1000];
bool used[1000];
int m,n;
int f[100],s[100];
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
	

}

int main()
{
	cin>>m>>n;
	for(int i=0;i<n;i++)
	{
			cin>>f[i]>>s[i];
			a[f[i]][s[i]]=1;
			a[s[i]][f[i]]=1;
	}

	for(int i=0;i<n;i++)
	{
		a[s[i]][f[i]]=0;
		a[f[i]][s[i]]=0;
		dfs(1);
		for(int j=1;j<=m;j++)
		{
			if(used[j]!=true)
			{
				cout<<f[i]<<" "<<s[i]<<endl;break;
			}
		}
		for(int j=1;j<=m;j++)
		{
			used[j]=false;
		}
		a[s[i]][f[i]]=1;
		a[f[i]][s[i]]=1;
	}

	return 0;
}