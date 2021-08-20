#include <bits/stdc++.h>

using namespace std;

signed main() {
	int t;
	cin >> t;
	while (t--) {
		int cur;
		cin >> cur;
		if (cur >= 1 && cur <= 9) {
			cout << 1 << endl; cout << cur << endl;
		}
		else {
			int ans = 0;
			string tmp;
			string s = to_string(cur);
			
			for (int i = 0; i < s.size(); i++)
				if (s[i] != '0') ans++;
			cout << ans << endl;
			
			for (int i = 0; i < s.size(); i++) 
				if (s[i] != '0') {
					tmp = s[i];
					tmp.append(s.size()-i-1,'0');
					cout << tmp << " ";
				}
			cout << endl;
		}
	}
	return 0;
}