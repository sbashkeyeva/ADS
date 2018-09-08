#include <iostream>
using namespace std;
int t, m;
char arr[1000][1000];
int used[1000][1000];
int dx[4]={-1, 1, 0, 0};
int dy[4]={0, 0, 1, -1};

void dfs(int x, int y){
	used[x][y]=1;
	for(int i=0; i<4; i++){
		if(x+dx[i]>=0 && x+dx[i]<t && y+dy[i]>=0 && y+dy[i]<m){
			if(arr[x+dx[i]][y+dy[i]]=='#' && used[x+dx[i]][y+dy[i]]==0){
				dfs(x+dx[i], y+dy[i]);
			}
		}
	}
}
int main(){
	cin>>t>>m;
	for(int i=0; i<t; i++){
		for (int j=0; j<m; j++){
			used[i][j]=0;
			cin>>arr[i][j];
		}
	}
	int bebe=0;
	for(int i=0; i<t; i++)
	{
		for(int j=0; j<m; j++){
			if(arr[i][j]=='#' && used[i][j]==0){
				dfs(i,j);
				bebe++;
			}
		}
		
	}
	
	cout<<bebe;
	return 0;
}