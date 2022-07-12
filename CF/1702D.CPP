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
        int curCost = 0;
        for (int i = 0; i < s.size(); i++) curCost += (int)(s[i]-'a')+1;
        int cost; cin >> cost;
        string s1 = s;
        sort(s.begin(),s.end());
        int idx = s.size()-1;
        unordered_map<char,int> cnt;
        while (curCost > cost) {
            cnt[s[idx]]++;
            curCost -= ((int)(s[idx--]-'a')+1);
        }
        string ans = "";
        for (int i = s.size()-1; i >= 0; i--)
            if (cnt[s1[i]] != 0) cnt[s1[i]]--;
            else ans = s1[i] + ans;
        cout << ans << "\n";
    }
    return 0;
}

