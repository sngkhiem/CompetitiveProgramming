#include <bits/stdc++.h>

using namespace std;

string a[105][105], mark[105];
int change[105];

signed main() {
    string tmp;
    getline(cin,tmp);
    int n,m=0; cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++) {
        int idx = 1;
        getline(cin,tmp);
        string s;
        for (int j = 0; j < tmp.size(); j++) {
            s += tmp[j];
            if (j == tmp.size()-1 || tmp[j] == ',') a[i][idx++] = s, s = "";
        }
        m = idx-1;
    }
    for (int i = 1; i <= n; i++) {
        int maxDiff = 0;
        for (int j = 1; j <= n; j++) {
            if (j != i) {
                int cur = 0;
                for (int p = 1; p <= m; p++) cur += (a[i][p] == a[j][p] ? 0 : 1);
                maxDiff = max(maxDiff,cur);
            }
        }
        change[i] += maxDiff;
    }
    int mn = 9999, idx = 0;
    for (int i = 1; i <= n; i++) mn = min(mn,change[i]);
    for (int i = 1; i <= n; i++)
        if (change[i] == mn) {
            int flag = 0; string s;
            for (int j = 1; j <= m; j++) s += a[i][j];
            for (int j = 0; j < idx; j++)
                if (s == mark[j]) {flag = 1; break;}
            if(!flag) mark[idx++] = s, cout << s << "\n";
        }
    return 0;
}
