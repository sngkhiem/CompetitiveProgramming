#include <bits/stdc++.h>

using namespace std;

const int maxn = 2e5+5;

pair<int,int> a[maxn];

bool cmp(pair<int,int> a, pair<int,int> b) {
    return a.second < b.second;
}

signed main() {
    int n,k; cin >> n >> k;
    multiset<int> cur;
    for (int i = 1; i <= k; i++) cur.insert(0);
    for (int i = 1; i <= n; i++) cin >> a[i].first >> a[i].second;
    sort(a+1,a+1+n,cmp);
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        bool flag = false;
        auto tmp = cur.upper_bound(a[i].first);
        if (tmp != cur.begin()) tmp--, flag = true;
        if (tmp != cur.begin() || flag) {
            cur.insert(a[i].second);
            cur.erase(tmp);
            ans++;
        } else if (cur.find(0) != cur.end()) {
            cur.insert(a[i].second);
            cur.erase(0);
            ans++;
        }
    }
    cout << ans;
    return 0;
}
