#include <bits/stdc++.h>

using namespace std;

signed main() {
	string s; cin >> s;
	for (int i = 0; i < 5; i++) {
		string cur;
		cin >> cur;
		if (cur[0] == s[0] || cur[1] == s[1]) {
			cout << "YES"; return 0;
		}
	}
	cout << "NO";
	return 0;
}
