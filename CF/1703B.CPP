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
        int ans = 0;
        string s; cin >> s;
        unordered_map<char,bool> mark;
        for (int i = 0; i < n; i++)
            if (!mark[s[i]]) ans+=2, mark[s[i]] = true;
            else ans++;
        cout << ans << "\n";
    }
    return 0;
}

