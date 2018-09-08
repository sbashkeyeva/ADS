#include <iostream>
#include <cmath>

using namespace std;

int f(int x)
{
	cout<<"kodk "<<x<<endl;
	if(x==0)
	{
	  return 0;
	}
	if(x==1)
	{
		return 1;
	}
	return f(x-1)+f(x-2);
}

// 0 1 1 2 3 5 8 13
// f(4)
// f(3) + f(2)
// f(2) + f(1) + f(2)
// f(1) + f(0) + f(1) + f(2)
// 1 + f(0) + f(1) + f(2)
// 1 + 0 + f(1) + f(2)
// 1 + 0 + 1 + f(2)
// 1 + 0 + 1 + f(1) + f(0)

int main()
{
	int n;
	cin>>n;
	cout<<f(n);
	return 0;
}