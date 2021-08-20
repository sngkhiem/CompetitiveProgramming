#include <bits/stdc++.h>

using namespace std;

signed main() {
	int ans = 1,k,r,cur;
	cin >> k >> r;
	cur = k;
	while (2>1) {
		if (k % 10 == 0 || (k-r)%10 == 0) break;
		k = cur;
		ans++;
		k *= ans;
	}
	cout << ans;
	return 0;
}