#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second

signed main() {
    long long s,n; cin >> s >> n;
    pair<int,int> a[n];
    for (int i = 0; i < n; i++) cin >> a[i].fi >> a[i].se;
    sort(a,a+n);
    for (int i = 0; i < n; i++)
        if (s > a[i].fi) s += a[i].se;
        else {cout << "NO"; return 0;}
    cout << "YES";
    return 0;
}
