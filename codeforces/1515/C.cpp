/*
	Author: sngkhiem
*/
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>

using namespace std;

/*faster in/out*/
#define fastIO ios::sync_with_stdio(false); cin.tie(0);

/*Some Pragma*/
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

/*type define*/

typedef pair<int, int> ii;
typedef vector<pair<int, int>> vii;

long long tc, x, n, m, sum[100009], cur;


int main() {
	fastIO;
	#ifndef ONLINE_JUDGE
		freopen("inp.txt", "r", stdin); freopen("out.txt", "w", stdout);
	#endif
	// ******************************************
	cin >> tc;
    while (tc--) {
		int r = 0, p = 0, t = 0; long long ma = 0, mi = 1e18;
		vii vt;
		cin >> n >> m >> x;
		vector <long long> sum(m + 5, 0), o(n + 5, 0);
		for (int i = 1; i <= n; ++i) {
			cin >> cur; vt.push_back(ii(cur, i));
		}
		sort(vt.begin(), vt.end(), greater<ii>());
		for (int i = 0; i < vt.size(); ++i) {
			if (i % m == 0) t = 1 - t;
			if (t) {
				sum[i % m] += vt[i].first; o[vt[i].second] = i % m + 1;
			}
			else {
				sum[m - i % m - 1] += vt[i].first; o[vt[i].second] = m - i % m;
			}
		}
		for (int i = 1; i < m; ++i) {
			ma = max(ma, sum[i]); mi = min(mi, sum[i]);
		}
		if (ma - mi > x) cout << "NO" << endl;
		else {
			cout << "YES" << endl;
			for (int i = 1; i <= n; ++i) cout << o[i] << " ";
			cout << endl;
		}
	}
}
