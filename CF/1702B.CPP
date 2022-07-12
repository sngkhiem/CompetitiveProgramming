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
        string s; cin >> s;
        int ans = 0;
        int cnt;
        for (int i = 0; i < s.size(); i++) {
            cnt = 0;
            unordered_map<char,bool> mark;
            while (cnt<3&&i<s.size()) {
                if (!mark[s[i]]) cnt++;
                mark[s[i]] = true;
                i++;
            }
            while(mark[s[i]]) i++;
            i--;
            ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}

