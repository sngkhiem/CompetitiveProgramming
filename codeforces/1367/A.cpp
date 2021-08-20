#include <bits/stdc++.h>

using namespace std;

signed main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		cout << s[0];
		for (int i = 1; i < s.size(); i+=2) 
			cout << s[i];
	    cout << endl;
	}
	return 0;
}