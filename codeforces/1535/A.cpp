#include <bits/stdc++.h>

using namespace std;

signed main() {
	int t;
	cin >> t;
	while (t--) {
		int s1,s2,s3,s4,max1 = 0,max2 = 0,ans1 = 0,ans2 = 0;
		cin >> s1 >> s2 >> s3 >> s4;
		max1 = max(s1,max(s2,max(s3,s4)));
		if (max1 == s1) max2 = max(s2,max(s3,s4));
		else if (max1 == s2) max2 = max(s1,max(s3,s4));
		else if (max1 == s3) max2 = max(s1,max(s2,s4));
		else if (max1 == s4) max2 = max(s1,max(s2,s3));
		
		ans1 = max(s1,s2); ans2 = max(s3,s4);

		if ((ans1 == max1 && ans2 == max2) or (ans1 == max2 && ans2 == max1)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}