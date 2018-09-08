#include <iostream>
#include <cmath>

using namespace std;

int a[1001000];
int n;

int main()
{

    int maxi = INT_MIN;
    int next = INT_MIN;
    int s, x;
    
    cin >> n;

    for(int i = 0; i < n; i++)
    {
    	cin >> x;
    	if(x > maxi)
    	{
    		maxi = x;
    		s = i;
    	}
    	if(x > next && i != s)
    	{
    		next = x;
    	}
    }
    cout << maxi << " " << next << endl;
    

	return 0;
}