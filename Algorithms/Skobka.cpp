#include <iostream>
#include <string>
using namespace std;
struct Node{
	char val;
	Node *R;
	Node (char v) {
		val = v;
		R = NULL;
	}
};
Node *cur = NULL;
int cnt = 0;
void push(char v)
{
	++ cnt;
	Node *next = new Node(v);
	if(cur == NULL)
	{
		cur = next;
		return;
	}
	next -> R = cur;
	cur = next;
}

void pop()
{
	cur = cur -> R;
	-- cnt;
}
char top()
{
	return cur -> val;
}
int size()
{
   return cnt;
}
void clear()
{
	cur = NULL;
}
int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); ++ i)
	{
		if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
			push(s[i]);
		}
		else {
			if (size() == 0)
			{
				cout << "no";
				return 0;
			}
			if (s[i] == '}' && top() == '{')
				pop();
			else if(s[i] == ')' && top() == '(') 
				pop();
			else if(s[i]==']' && top()=='[' )
				pop();
			else {
				cout<<"no";
				return 0;
			}
		}
	}
	if(size()!=0)
	{
		cout<<"no";
	}
	else {
		cout<<"yes";
	}

	return 0;
}