#include <iostream>
using namespace std;
int st[100000];
int enD=0;

void push(int x)
{
	enD++;
	st[enD]=x;
	cout<<"ok"<<endl;
}
void pop()
{
	if(enD!=0)
	{
		cout<<st[enD]<<endl;
		enD--;
	}
}
int back()
{
   return st[enD];
}
int size()
{
	return enD;
}
void clear()
{
	enD = 0;
	cout<<"ok"<<endl;;
}
int main()
{
	string s;
	int a;
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
		if(s=="back")
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