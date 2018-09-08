#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int a[111111];
string binSearch (int l, int r, int x) {
	while (l <= r) {
		int mid = (l + r) / 2;
		if (a[mid] == x)
			return "YES";
		if (x >= a[mid])
		{
			l = mid + 1;
		}
		else {
			r = mid - 1;
		}
	}
	return "NO";
}
int main ()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++ i){
		cin >> a[i];
	}
	for (int i = 1; i <= m; ++ i){
		int x;
		cin >> x;
		cout << binSearch(1, n, x) << endl;
	}
}