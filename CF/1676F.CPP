#include <bits/stdc++.h>

using namespace std;

#define ll long long

signed main() {
    int t; cin >> t;
    while (t--) {
        map<int,int> freq;
        set<int> a;
        int n,k; cin >> n >> k;
        int l = -1, r = -1,ansL = -1, ansR = -1, ansVal = -1;
        for (int i = 0; i < n; i++) {
            int tmp; cin >> tmp;
            a.insert(tmp);
            freq[tmp]++;
        }
        int memo = 1;
        for (auto x: a) {
            if (freq[x] < k) l = -1, r = -1, memo = 1;
            else if (freq[x] >= k && l==-1) {
                l = x, r = x;
                if (r != -1 && l != -1 && r-l > ansVal) {
                    ansVal = r-l;
                    ansL = l; ansR = r;
                }
            } else if (x == l+memo && freq[x] >= k) {
                memo++;
                r = x;
                if (r != -1 && l != -1 && r-l > ansVal) {
                    ansVal = r-l;
                    ansL = l; ansR = r;
                }
            } else if (freq[x] >= k) {
                l = x, r = x;
                memo = 1;
                if (r != -1 && l != -1 && r-l > ansVal) {
                    ansVal = r-l;
                    ansL = l; ansR = r;
                }
            }
        }
        if (r != -1 && l != -1 && r-l > ansVal) {
            ansVal = r-l;
            ansL = l; ansR = r;
        }
        if (ansL == -1 && ansR == -1) cout << "-1\n";
        else cout << ansL << " " << ansR << "\n";
        freq.clear();
        a.clear();
    }
    return 0;
}
