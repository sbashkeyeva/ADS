#include <iostream>
#include <cmath>
using namespace std;
char arr[1001][1001];
bool ok;
int t1,m1,t2,m2;
void tipoBfs(int s,int b)
{
	arr[s][b]='1';
	if(s==t2 && b==m2)
	{
		ok=true;
	}
	if(arr[s][b+1]=='0')
	{
		tipoBfs(s,b+1);
	}
	if(arr[s-1][b]=='0')
	{
		tipoBfs(s-1,b);
	}
	if(arr[s][b-1]=='0')
	{
		tipoBfs(s,b-1);
	}
	if(arr[s+1][b]=='0')
	{
		tipoBfs(s+1,b);
	}
	

}
int main()
{
	int a, k;
	cin>>a>>k;
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=k;j++)
		{
			cin>>arr[i][j];
		}
	}
	cin>>t1>>m1;
	cin>>t2>>m2;
	tipoBfs(t1,m1);
	if(!ok) cout<<"NO";
	else cout<<"YES";
		
	return 0;
}