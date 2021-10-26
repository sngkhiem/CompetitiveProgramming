#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    long long n,k; cin >> n >> k;
    if (k > n) cout << 0;
    else if (k == n) cout << "oo";
    else {
        int cnt = 0;
        for (int i = 1; i <= sqrt(n-k); i++)
            if ((n-k) % i == 0) {
                if (i > k) {
                    cnt++;
                    //cout << i << "\n";
                }
                if (((n-k)/i) > k) {
                    cnt++;
                    //cout << (n-k)/i << "\n";
                }
            }
        if (ceil(sqrt(n-k)) == sqrt(n-k) && sqrt(n-k) > k) cnt--;
        cout << cnt;
    }
}
