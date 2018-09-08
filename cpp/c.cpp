#include <iostream>
using namespace std;
bool b_search(int a[], int x, int  size)
{
	int r=size - 1;
	int l=0;
	int mid;
	while(l!=r-1)
	{	
		cout<<l<<mid<<r<<endl;
		mid = (l+r)/2;
		if (a[mid] == x)
		{
			return true;
		}
		if(a[mid]>x)
			l=mid;
		if(a[mid]<x)
			r=mid;

	}
	return false;
}

int arr1[100000];
int arr2[100000];
int main()
{
	int a;
	int b;


	cin>>a>>b;



	for (int i = 0; i < a; ++i)
	{
		/* code */
		int y ;
		cin>>y;
		arr1[i] = y;
	}

	for (int i = 0; i < b; ++i)
	{
		/* code */
		int y ;
		cin>>y;
		arr2[i] = y;
	}

	for (int i = 0; i < a; ++i)
	{
		/* code */
		cout<<arr1[i];
	}

	for (int i = 0; i < a; ++i)
	{
		/* code */
		if ( b_search( arr2, arr1[i], b) )
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}



}