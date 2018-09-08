#include <iostream>

using namespace std;

int n, m;
int x1,y1,x2,y2;
char a[10101][10101];
bool check = false;

void deep_search(int x,int y) {
	a[x][y] = '1';
	if(x==x2 && y==y2) {
		check = true;
	}
	if(a[x][y-1]=='0' ) {
		deep_search(x,y-1);
	}
	if(a[x][y+1]=='0' ) {
		deep_search(x,y+1);
	}
	if(a[x-1][y]=='0' ) {
		deep_search(x-1,y);
	}
	if(a[x+1][y]=='0' ) {
		deep_search(x+1,y);
	}
}

int main() {
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}

	cin >> x1 >> y1;
	cin >> x2 >> y2;

	deep_search(x1,y1);
	if(check) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	cout << endl;
	return 0;
}