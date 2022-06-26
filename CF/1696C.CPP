/*
    Author: Tran Hoang Khiem
    School: Nguyen Thi Minh Khai High School
*/
#include <bits/stdc++.h>

using namespace std;

#define all(a) a.begin(),a.end()
#define ll long long
#define int long long

signed main() {
    int t; cin >> t;
    while (t--) {
        int n,k,m; cin >> n >> m;
        int a[n+1];
        vector<pair<int,int>> memo, memo2;
        for (int i = 1; i <= n; i++) {
            int cur; cin >> cur;
            int tmp = cur;
            int cnt = 1;
            while (cur % m == 0) cur /= m;
            if (!memo.size() || cur != memo[memo.size()-1].second) memo.push_back({tmp/cur,cur});
            else memo[memo.size()-1].first += tmp/cur;
        }
        //for (auto x: memo) cout << x.first << " " << x.second << "\n";
        cin >> k;
        int idx = 0;
        for (int i = 1; i <= k; i++) {
            int cur; cin >> cur;
            int tmp = cur;
            int cnt = 1;
            while (cur % m == 0) cur /= m;
            if (!memo2.size() || cur != memo2[memo2.size()-1].second) memo2.push_back({tmp/cur,cur});
            else memo2[memo2.size()-1].first += tmp/cur;
        }
        if (memo.size() != memo2.size()) cout << "NO\n";
        else {
            int flag = 0;
            for (int i = 0; i < memo.size(); i++) {
                if (memo[i] == memo2[i]) continue;
                else {
                    cout << "NO\n";
                    flag = 1;
                    break;
                }
            }
            if (!flag) cout << "YES\n";
        }
    }
    return 0;
}

