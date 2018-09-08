#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int v,t;
	cin>>v>>t;
	if(v>0)
	{
		cout<<v*t-109<<endl;
	} 
	else
	{
		cout<<(109-abs(v*t))<<endl;
	}
	
	return 0;
}