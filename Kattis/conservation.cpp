#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100005;

int n,m;
vector<int> adj[MAXN];
int indeg[MAXN],indeg2[MAXN];
int lab[MAXN];

int kahn1(int curLab) {
	stack<int> st[3];
	for (int i = 1; i <= n; i++)
		if (indeg[i] == 0) st[lab[i]].push(i);

	int cnt = 0, ans = -1;
	while (cnt < n) {
		while (st[curLab].size()) {
			int u = st[curLab].top(); st[curLab].pop(); cnt++; 
			for (auto v: adj[u]) {
				indeg[v]--;
				if (indeg[v] == 0) {
					st[lab[v]].push(v);
				}
			}
		}
		if (curLab == 1) curLab = 2;
		else curLab = 1;
		ans++;
	}
	return ans;
}

int kahn2(int curLab) {
	stack<int> st[3];
	for (int i = 1; i <= n; i++)
		if (indeg2[i] == 0) st[lab[i]].push(i);

	int cnt = 0, ans = -1;
	while (cnt < n) {
		while (st[curLab].size()) {
			int u = st[curLab].top(); st[curLab].pop(); cnt++;
			for (auto v: adj[u]) {
				indeg2[v]--;
				if (indeg2[v] == 0) {
					st[lab[v]].push(v);
				}
			}
		}
		if (curLab == 1) curLab = 2;
		else curLab = 1;
		ans++;
	}
	return ans;
}

signed main() {
	int t; cin >> t;
	while (t--) {
		//cout << 1 << "\n";
		cin >> n >> m;
		//cout << n << " " << m;
		for (int i = 1; i <= n; i++) cin >> lab[i];
		for (int i = 0; i < m; i++) {
			int u,v; cin >> u >> v;
			adj[u].push_back(v); 
			indeg[v]++; indeg2[v]++;
		}

		cout << min(kahn1(1),kahn2(2)) << "\n";

		for (int i = 1; i <= n; i++) adj[i].clear();
		memset(indeg,0,sizeof indeg);
		memset(indeg2,0,sizeof indeg2);
		memset(lab,0,sizeof lab);
	}
	return 0;
}