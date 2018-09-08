#include <iostream>
using namespace std;
int quE[10000];
int l=0;
int r=0;
void push(int value)
{
	quE[r++]=value;
	cout<<"ok"<<endl;
}
void pop()
{
	if(l!=r)
	{
		cout<<quE[l]<<endl;
	    l++;
	}
	
}
int front()
{
	if(l!=r)
	{
		return quE[l];
	} 
	else return -1;
	
}
int size()
{
	return (r-l);
}
void clear()
{
	while(r==l)
	{
		r--;
	}
	cout<<"ok"<<endl;
}

int main()
{
	string s;
	while(s!="exit")
	{
		cin>>s;
		if(s=="push")
		{
			cin>>a;
			push(a);
		}
		if(s=="pop")
		{
			pop();
		}
		if(s=="size")
		{
			cout<<size()<<endl;
		}
		if(s=="front")
		{
			cout<<back()<<endl;
		}
		if(s=="clear")
		{
			clear();
		}
	}
	cout<<"bye"<<endl;

	return 0;
}