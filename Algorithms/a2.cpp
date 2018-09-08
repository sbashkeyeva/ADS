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
        cout<<"ok"<<endl;
	    return;
	}

	last -> r = pos;
	last = pos;
	cout<<"ok"<<endl;
}
void pop()
{ 
	cout<<cur->value<<endl;
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
	cnt=0;
	cout<<"ok"<<endl;
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
        if(s=="front")
        {
            cout<<front()<<endl;
        }
       
        if(s=="clear")
        {
            clear();
        }
    }
    cout<<"bye"<<endl;
 
    return 0;
}