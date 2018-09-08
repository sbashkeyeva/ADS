#include <iostream>
#include <cmath>
using namespace std;
int a[1001][1001];
int x;
int main(){
	int count=0;
	cin>>x;
	for(int i=1;i<=x;i++) 
	{
		for(int j=1;j<=x;j++)
		 {
			cin>>a[i][j];
			if(a[i][j]==1)
			count++; 
		}
	}
	count=count/2;
	cout<<count-x+1;
	return 0;
}