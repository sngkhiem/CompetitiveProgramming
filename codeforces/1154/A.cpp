#include <bits/stdc++.h>

using namespace std;

signed main() {
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int abc = max(a,max(max(b,c),d));
	if (abc - a != 0) cout << abc - a << " ";
	if (abc - b != 0) cout << abc - b << " ";
	if (abc - c != 0) cout << abc - c << " ";
	if (abc - d != 0) cout << abc - d << " ";
	return 0;
}