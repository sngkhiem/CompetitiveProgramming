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
        string a[n+1];
        unordered_map<string,bool> mp;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            mp[a[i]] = true;
        }
        vector<int> ans;
        for (int i = 1; i <= n; i++) {
            int flag = 0;
            for (int l = 0; l <= a[i].size()-1; l++) {
                string s1 = "",s2 = "";
                for (int j = 0; j <= l; j++) s1 += a[i][j];
                for (int j = l+1; j < a[i].size(); j++) s2 += a[i][j];
                //cout << s1 << " " << s2 << "\n";
                if (mp[s1] && mp[s2]) {
                    ans.push_back(1);
                    flag = 1;
                    break;
                }
            }
            if (!flag) ans.push_back(0);
        }
        for (int i = 0; i < ans.size(); i++) cout << ans[i];
        cout << "\n";
    }
    return 0;
}

