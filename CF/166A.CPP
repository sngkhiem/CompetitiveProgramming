#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
    if (a.first == b.first) return a.second < b.second;
    return a.first > b.first;
}

signed main() {
    int n,k; cin >> n >> k;
    pair<int,int> teams[n+1];
    for (int i = 1; i <= n; i++) cin >> teams[i].first >> teams[i].second;
    sort(teams+1,teams+1+n,cmp);
    int cnt = 0;
    for (int i = 1; i < k; i++)
        if (teams[i] == teams[k]) cnt++;
    for (int i = k+1; i <= n; i++)
        if (teams[i] == teams[k]) cnt++;
    cout << cnt+1;
    return 0;
}
