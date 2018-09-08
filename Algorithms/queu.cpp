#include <iostream>
using namespace std;
struct Node {
    int value;
    Node *L, *R;
    
    Node (int _value) {
        value = _value;
        L = R = NULL;
    }
};
Node* cur = NULL;
Node* last = NULL;
int sz = 0;
void remove () {
    if (cur == NULL)
        return;
    cout << (cur -> value) << endl;
    -- sz;
     cur = cur -> R;
}
void add (int x) {
    ++ sz;
    Node* l = new Node(x);
    if (last != NULL)
        last -> R = l;
    last = l;
    if (cur == NULL)
        cur = last;
}
void clear () {
    cur = NULL;
    last = NULL;
    sz = 0;
    cout << "ok\n";
}
int front () {
    return cur -> value;
}
int main() {
    
    string s;
    while (cin >> s) {
        if (s == "exit")
            break;
        if (s == "push")
        {
            int x;
            cin >> x;
            add (x);
        }
        if (s == "size")
            cout << sz << endl;
        if (s == "pop")
            remove();
        if (s == "clear")
            clear();
        if (s == "front")
            cout << front () << endl;
        if (s == "push")
            cout << "ok\n";
    }
    cout << "bye";
    return 0;
}
