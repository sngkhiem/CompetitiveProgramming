#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
    return a.first > b.first;
}

signed main() {
    int n; cin >> n;
    pair<int,int> a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    long long ans = 0;
    sort(a,a+n,cmp);
    for (int i = 0; i < n; i++)
        ans += (a[i].first*i+1);
    cout << ans << "\n";
    for (int i = 0; i < n; i++) cout << a[i].second+1 << " ";
    return 0;
}
