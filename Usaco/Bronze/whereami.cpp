#include <bits/stdc++.h>

using namespace std;

unordered_map<string,int> pos;

signed main() {
    freopen("whereami.in","r",stdin); freopen("whereami.out","w",stdout);
    int n; cin >> n;
    string s; cin >> s;

    for (int i = 0; i < s.size(); i++) {
        string tmp(1,s[i]);
        pos[tmp]++;
        string cur = tmp;
        for (int j = i+1; j < s.size(); j++) {
            cur = cur + s[j];
            pos[cur]++;
        }
    }

    int i;
    for (i = 1; i <= n; i++) {
        int flag = -1;
        for (int j = 0; j < n; j++) {
            string cur(1,s[j]);
            for (int p = j+1; p < j+i && p < n; p++)
                cur = cur + s[p];
            //if (cur.size() == i) cout << i << " " << cur << " " << pos[cur] << "\n";
            if (cur.size() != i) break;
            if (pos[cur] == 1 && cur.size() == i && flag != 0) flag = 1;
            else flag = 0;

        }
        //cout << "\n";
        if (flag == 1) {
            cout << i; return 0;
        }
    }
    return 0;
}
