#include <bits/stdc++.h>

using namespace std;

int N;

signed main() {
	cin >> N;
	stack<pair<int, int>> stack;
	stack.push({0, 0});
	for(int i = 1; i <= N; ++i) {
		int a; cin >> a;
		while(!stack.empty() && stack.top().first >= a) stack.pop();
		cout << stack.top().second << " ";
		stack.push({a, i});
	}
	return 0;
}
