#include <iostream>
using namespace std;
struct Node
{
	int value;
	Node *r;
	Node (int val) {
		value = val;
		r = NULL;
	}
};

Node *cur;
Node *last;
int cnt = 0;
void push(int val)
{
	Node *pos = new Node(val);
	cnt ++;
	if(last == NULL)
	{
	    last = pos;
	    cur = last;
	    return;
	}

	last -> r = pos;
	last = pos;
}
void pop()
{ 
	if (cnt == 0)
		return;
    cur = cur -> r;
	cnt --;
}
int front()
{
   return cur -> value;
}
int size()
{
	return cnt;
}
void clear()
{
	cur = NULL;
	last = NULL;
}
int main()
{
	push(5);
	push(4);
	push(2);
	push(9);
	push(7);
	push(6);
	pop();
	cout << front() << endl;
	cout << size() << endl;
	return 0;
}