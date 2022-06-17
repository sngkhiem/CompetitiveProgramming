#include <bits/stdc++.h>

using namespace std;

const int maxn = 2e5+5;

string s;
int pref1[maxn],pref2[maxn],pref3[maxn];

bool check(int length) {
    if (s.size() < length) return false;
    int left = 1, right = length;
    while (true) {
        int cnt1 = 0, cnt2 = 0, cnt3 = 0;
        cnt1 += pref1[right] - pref1[left-1];
        cnt2 += pref2[right] - pref2[left-1];
        cnt3 += pref3[right] - pref3[left-1];
        if (cnt1 >= 1 && cnt2 >= 1 && cnt3 >= 1) return true;
        left++; right++;
        if (right == s.size()+1) return false;
    }
    return false;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') pref1[i+1] = pref1[i] + 1;
            else pref1[i+1] = pref1[i];

            if (s[i] == '2') pref2[i+1] = pref2[i] + 1;
            else pref2[i+1] = pref2[i];

            if (s[i] == '3') pref3[i+1] = pref3[i] + 1;
            else pref3[i+1] = pref3[i];

        }

        int lo = 3, hi = 2e5, ans = 0;
        while (lo <= hi) {
            int mid = (lo+hi)/2;
            if (s.size() < mid) hi = mid-1;
            else if (check(mid)) ans = mid, hi = mid - 1;
            else lo = mid + 1;
        }
        cout << ans << "\n";
    }
    return 0;
}
