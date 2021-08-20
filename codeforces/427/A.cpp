#include <bits/stdc++.h>

using namespace std;

signed main() {
	int n, police = 0, crime = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int cur;
		cin >> cur;
		if (cur >= 1) police+= cur;
		else {
			crime++;
			if (police > 0) { police--; crime--;}
			else police = 0;
		}
	}
	cout << crime;
	return 0;
}