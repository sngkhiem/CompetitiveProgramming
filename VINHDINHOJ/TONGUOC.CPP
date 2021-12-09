#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        long long sum = 0, cnt = 0;
        for (int i = 1; i <= sqrt(n); i++)
            if (n % i == 0) {
                sum += (n/i + n/(n/i));
                cnt += 2;
            }
        if (sqrt(n) == ceil(sqrt(n))) {
            sum -= sqrt(n);
            cnt--;
        }
        cout << n << " co " << cnt << " uoc. Tong uoc la: " << sum << "\n";
    }
    return 0;
}
