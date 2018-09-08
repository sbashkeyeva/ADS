#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a[100];
	int n;
	cin>>n;
	int cnt1=0;
	int cnt2=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2!=0)
		{
			cnt1++;
			cout<<a[i]<<" ";

		} 
		
	}
	cout<<endl;
	for(int j=0;j<n;j++)
	{
		if(a[j]%2==0)
		{
			cnt2++;
			cout<<a[j]<<" ";
		}
	}
	cout<<endl;
	if(cnt1>cnt2){
		cout<<"NO"<<endl;
	}
	else if(cnt1<cnt2) {
		cout<<"YES"<<endl;
	}
	return 0;
}