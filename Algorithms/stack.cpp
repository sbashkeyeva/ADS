#include <iostream>
using namespace std;
struct node {
	int val;
	node *l;
	node (int v) {
		val = v;
		l = NULL;
	}
};

node *last;
int cnt = 0;
void push (int v) {
	node *nw = new node (v);
	cnt ++;
	if (last == NULL) {
		last = nw;
		return;
	}
	nw -> l = last;
	last = nw;
}
int top()
{
	return last -> val;
}
void pop()
{
	cnt --;
	cout << top() << endl;
	last = last -> l;
}

int size()
{
   return cnt;
}
void clear()
{
	last = NULL;
	cnt = 0;
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
	cout<<size();
	return 0;
}


