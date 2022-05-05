#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fi first
#define se second

signed main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int tmp = s.size()+1;
        int pre1[tmp],pre2[tmp],pre3[tmp],suf1[tmp],suf2[tmp],suf3[tmp];
        memset(pre1,0,sizeof pre1); memset(pre2,0,sizeof pre2); memset(pre3,0,sizeof pre3);
        memset(suf1,0,sizeof suf1); memset(suf2,0,sizeof suf2); memset(suf3,0,sizeof suf3);
        if (s.size() == 1) cout << "1\n";
        else {
            for (int i = s.size()-2; i >= 0; i--) {
                if (s[i+1] == '1') suf1[i] = suf1[i+1]+1,suf2[i]=suf2[i+1],suf3[i]=suf3[i+1];
                else if (s[i+1] == '0') suf2[i] = suf2[i+1]+1,suf1[i]=suf1[i+1],suf3[i]=suf3[i+1];
                else if (s[i+1] == '?') suf3[i] = suf3[i+1]+1,suf1[i]=suf1[i+1],suf2[i]=suf2[i+1];
            }
            for (int i = 1; i < s.size(); i++) {
                if (s[i-1] == '1') pre1[i] = pre1[i-1]+1,pre2[i]=pre2[i-1],pre3[i]=pre3[i-1];
                else if (s[i-1] == '0') pre2[i] = pre2[i-1]+1,pre1[i]=pre1[i-1],pre3[i]=pre3[i-1];
                else if (s[i-1] == '?') pre3[i] = pre3[i-1]+1,pre1[i]=pre1[i-1],pre2[i]=pre2[i-1];
            }
            int ans = 0;
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == '1') {
                    if (suf1[i] == 0 && pre2[i] == 0) ans++;
                } else if (s[i] == '0') {
                    if (pre2[i] == 0 && suf1[i] == 0) ans++;
                } else if (s[i] == '?') {
                    if (suf1[i] == 0 && pre2[i] == 0) ans++;
                }
            }
            cout << ans << "\n";
        }
    }
    return 0;
}

