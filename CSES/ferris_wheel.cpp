#include <bits/stdc++.h>

using namespace std;

signed main() {
	int n,x; cin >> n >> x; int a[n], mark[n];
	memset(mark,0,sizeof mark);
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a,a+n);
	int cnt = 0, i = 0, j = n-1;
	while (i < j) {
		if (a[i] + a[j] <= x) {
			mark[i] = 1; mark[j] = 1;
			i++; j--; cnt++;
		} else j--;
	}
	for (int i = 0; i < n; i++)
		if (mark[i] == 0) cnt++;
	cout << cnt;
	return 0;
}
