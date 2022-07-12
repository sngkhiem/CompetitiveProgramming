/*
    Author: Tran Hoang Khiem
    School: Nguyen Thi Minh Khai High School
*/
#include <bits/stdc++.h>

using namespace std;

#define all(a) a.begin(),a.end()
#define ll long long

int cnt1 = 0;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        unordered_map<int,pair<int,int>> pos;
        for (int i = 1; i <= n; i++) {
            int tmp; cin >> tmp;
            if (pos[tmp].first == 0) pos[tmp] = {i,i};
            else pos[tmp].second = i;
        }
        while (k--) {
            int a,b; cin >> a >> b;
            if (pos[a].first <= pos[b].second && pos[a].first != 0 && pos[b].second != 0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}
