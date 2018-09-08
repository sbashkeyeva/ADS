#include <iostream>
#include <cmath>

using namespace std;



// 0 1 1 2 3 5 8 13
int a[100100];
int main()
{
	int n;
	cin>>n;
	a[0]=0;
	a[1]=1;
	for(int i=2;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	cout<<a[n]<<endl;

	return 0;
}