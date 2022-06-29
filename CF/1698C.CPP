/*
    Author: Tran Hoang Khiem
    School: Nguyen Thi Minh Khai High School
*/
#include <bits/stdc++.h>

using namespace std;

#define all(a) a.begin(),a.end()
#define ll long long

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> a;
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        unordered_map<ll,bool> mark;
        for (int i = 1; i <= n; i++) {
            ll tmp; cin >> tmp;
            if (tmp == 0 && cnt2 == 1) continue;
            a.push_back(tmp); mark[a[a.size()-1]] = true;
            if (a[a.size()-1] == 0) cnt2++;
        }
        for (int i = 0; i < a.size(); i++)
            if (a[i] > 0) cnt0++;
            else if (a[i] < 0) cnt1++;
        string ans = "YES\n";
        if (a.size() > 5) cout << "NO\n";
        else if (cnt0 >= 3 && cnt1 >= 3) cout << "NO\n";
        else {
            for (int i = 0; i < a.size(); i++) {
                for (int j = i+1; j < a.size(); j++) {
                    for (int p = j+1; p < a.size(); p++) {
                        if (i!=j && j != p) {
                            ll sum = a[i]+a[j]+a[p];
                            if (!mark[sum]) ans = "NO\n";
                        }
                    }
                }
            }
            cout << ans;
        }
    }
    return 0;
}
