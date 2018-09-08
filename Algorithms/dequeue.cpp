#include <iostream>
using namespace std;

struct Node
{
	int val;
	Node *l;
	Node *r;

	Node(int v) // it is a constructor for making objects of type Node;
	{
      val=v;
      l=NULL;
      r=NULL;
	}
};

Node *head =NULL;
Node *tail = NULL;
int cnt=0;

void push_back(int n)
{
	Node *x = new Node(n);	
	cnt++;
	if (tail == NULL)
	{
		head = x;
		tail = x;
	}			
	else
	{
		tail -> r = x;
		x -> l = tail;
		tail = x;
	}	
	
}
void push_front(int n)
{
	cnt++;
	Node *x = new Node(n);
	if (head == NULL)
	{
		head = x;
		tail = x;
	}			
	else
	{
		head -> l = x;
		x -> r = head;
		head = x;
	}	
}

void pop_front()
{
	if (cnt == 1) {
		tail = NULL;
		head = NULL;
		cnt --;
		return;
	}
	head = head -> r;
	head -> l = NULL;
	cnt--;
}
void pop_back()
{
	if (cnt == 1) {
		tail = NULL;
		head = NULL;
		cnt --;
		return;
	}
	tail = tail -> l;
	tail -> r = NULL;
	cnt--;
}
int front()
{
	return head->val;
}
int size()
{
	return cnt;
}

void clear()
{
	
	tail=NULL;
	head=NULL;
	cnt=0;
}
int back()
{
	return tail->val;
}

int main()
{
	string s;
	while (!(s=="exit"))
	{
		cin>>s;
		if(s=="push_front")
		{
			int x;
			cin>>x;
			push_front(x);
			cout << "ok" << endl;
		}
		if(s=="push_back")
		{
			int y;
			cin>>y;
			push_front(y);
			cout << "ok" << endl;
		}
		if(s=="pop_back")
		{
			cout << back () << endl;
			pop_back();
		}
		if(s=="pop_front")
		{
			cout << front () << endl;
			pop_front();
		}
		if(s=="back")
		{
			cout<<back()<<endl;
		}
		if(s=="front")
		{
			cout<<front()<<endl;
		}
		if(s=="size")
		{
			cout<<size()<<endl;
		}
		if(s=="clear")
		{
			clear();
			cout << "ok" << endl;
		}
	}
	cout<<"bye"<<endl;


	return 0;
}