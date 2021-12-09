#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    int cnt = 0;
    set<int> ls;
    for (int i = 1; i <= sqrt(n); i++)
        if (n % i == 0) {
            ls.insert(n/i);
            ls.insert(n/(n/i));
            cnt += 2;
        }
    if (sqrt(n) == ceil(sqrt(n))) cnt--;
    cout << n << " co " << cnt << " uoc. Danh sach uoc:\n";
    for (auto x: ls) cout << x << "\n";
    return 0;
}
