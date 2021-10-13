#include <bits/stdc++.h>

using namespace std;

unordered_map<char,int> cnt;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++)
        cnt[s[i]]++;

    int tmp = 0, valOdd = 0;
    char charOdd;
    for (auto x: cnt)
        if (x.second % 2 == 1) {
            tmp++;
            charOdd = x.first;
            valOdd = x.second;
        }
    if (tmp >= 2) cout << "NO SOLUTION";
    else {
        string ans(valOdd,charOdd);
        string ans1 = "";
        int sz = ans.size();
        for (auto x: cnt) {
            if (x.second % 2 == 0) {
                for (int i = 0; i < x.second/2; i++)
                    ans += x.first;
                for (int i = 1; i <= x.second/2; i++)
                    ans1 += x.first;
            }
        }
        reverse(ans1.begin(),ans1.end());
        cout << ans1+ans;
    }
    return 0;
}
