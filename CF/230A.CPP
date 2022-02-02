#include <bits/stdc++.h>

using namespace std;

signed main() {
    int s,n; cin >> s >> n;
    pair<int,int> dragons[n];
    memset(dragons,0,sizeof dragons);
    for (int i = 0; i < n; i++) cin >> dragons[i].first >> dragons[i].second;
    sort(dragons,dragons+n);
    for (int i = 0; i < n; i++)
        if (dragons[i].first < s) s += dragons[i].second;
        else {cout << "NO"; return 0;}
    cout << "YES";
    return 0;
}
