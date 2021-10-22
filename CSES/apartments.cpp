#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
	int n,m,k; cin >> n >> m >> k;
	int a[n], b[m];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < m; i++) cin >> b[i];
	sort(a,a+n); sort(b,b+m);
	int cnt = 0, curIDX = 0;
	int i = 0;
	while(i < n && curIDX < m) {
		if (b[curIDX] <= a[i]+k && b[curIDX] >= a[i]-k) {
			cnt++; curIDX++; i++;
		} else if (b[curIDX] > a[i]+k) i++;
		else if (b[curIDX] < a[i]-k) curIDX++;
	}
	cout << cnt;
	return 0;
}
