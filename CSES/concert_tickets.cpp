#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9+5;

signed main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n,m; cin >> n >> m;
	multiset<int> h;
	for (int i = 0; i < n; i++) {
		int tmp; cin >> tmp; h.insert(tmp);
	}
	for (int i = 0; i < m; i++) {
		int tmp; cin >> tmp;
		auto it = h.upper_bound(tmp);
		if (it == h.begin()) cout << "-1\n";
		else {
			cout << *(--it) << '\n';
			h.erase(it);
		}
	}

	return 0;
}
