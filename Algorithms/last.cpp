#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int a[1111111];
int b[1111111];
int tmp[111111];

void MergeSort(int symbat[],int l,int r)
{
	if(l==r)
	{
		return;
	}
	int m=(l+r)/2;
	MergeSort(symbat,l,m);
	MergeSort(symbat,m+1,r);
	int ptrL=l;
	int ptrL2=m+1;
	int ptrPos=l;
	while(ptrL<=m && ptrL2<=r)
	{
		if(symbat[ptrL]<symbat[ptrL2])
		{
			tmp[ptrPos]=symbat[ptrL];
			ptrL++;
			ptrPos++;
		}
		else {
			tmp[ptrPos]=symbat[ptrL2];
			ptrL2++;
			ptrPos++;
		}
	}
	while(ptrL<=m)
	{
		    tmp[ptrPos]=symbat[ptrL];
			ptrL++;
			ptrPos++;
	}
	while(ptrL2<=r)
	{
		    tmp[ptrPos]=symbat[ptrL2];
			ptrL2++;
			ptrPos++;
	}

	for(int i=l;i<=r;i++)
	{
		symbat[i]=tmp[i];
	}

}
bool binSearch(int zh[],int l,int r,int x)
{
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(zh[mid]==x)
			return true;
		if(zh[mid]<=x)
		{
			l=mid+1;
	    }
	    else 
	    {
	    	r=mid-1;
	    }
	}

	    return false;
}
int main()
{

	int n,m;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];

	}
	cin>>m;
	MergeSort(a,1,n);
	bool ok = 1;
	for(int i=1;i<=m;i++)
	{
		cin>>b[i];
		if (binSearch(a, 1, n, b[i]) != true) {
			ok = 0;
		}
	}
    MergeSort(b,1,m);
    for(int i=1;i<=n;i++)
    {
    	if(binSearch(b, 1,m,a[i])!=true)
    	{
    		ok=0;
    	}
    }

	if (ok) cout << "YES";
	else cout << "NO";
	// MergeSort(b,1,m);
	

	return 0;
}