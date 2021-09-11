#include <bits/stdc++.h>

using namespace std;

#define int long long

const int N = 1e4;

int flowers[N];

signed main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) cin >> flowers[i];

	int cnt = n, sum = 0;
	//cout << cnt << "\n";
	for (int i = 0; i < n; i++) {
		sum = flowers[i];
		for (int j = i+1; j < n; j++) {
			sum += flowers[j];
			if (sum % (j-i+1) == 0) {
                for (int p = i; p <= j; p++)
                    if (flowers[p] == sum / (j-i+1)) {
                        cnt++; break;
                    }
			}
		}
	}
	cout << cnt;
}
