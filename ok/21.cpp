#include <iostream>
#include <cmath>

using namespace std;

int f(int x)
{
	if(x==0)
	{
	  return 0;
	}
	if(x==1)
	{
		return 1;
	}
	return x+f(x-1);
}

// 0 1 1 2 3 5 8 13

int main()
{
	int n;
	cin>>n;
	cout<<f(n);
	return 0;
}