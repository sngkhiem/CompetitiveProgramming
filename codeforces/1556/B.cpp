#include <bits/stdc++.h>

using namespace std;

#define int long long

const int INF = 1e18;

int n,m,tmp[100005],tmp2[100005];
bool check[100005];

signed main() {
    int t; cin >> t;
    tmp2[0] = 1; tmp[0] = 0;
    for (int i = 1; i < 100005; i++) tmp[i] = 1 - tmp[i-1],tmp2[i] = 1 - tmp2[i-1];
    while (t--) {
        int n,odd=0,even=0; cin >> n; int a[n+5];
        for (int i = 1; i <= n; i++) {
            cin >> a[i]; a[i] %= 2;
            if (a[i]) even++; else odd++;
        }
        if (abs(even-odd) >= 2) cout << "-1\n";
        else {
            int b[2] = {0,0}; int ans = 0;
            for (int i = 1; i <= n; i++)
                b[tmp[i]]++, check[i] = 0;
            if (b[1] != even || b[0] != odd) ans = INF;
            else {
                int tmp3 = tmp[2],j=0; vector<int> idx;
                for (int i = 1; i <= n; i++) if (a[i] == tmp3) idx.push_back(i);
                for (int i = 2; i <= n; i += 2) ans += abs(idx[j]-i),j++;
            }

            b[0]=0; b[1]=0; int ans2 = 0;
            for (int i = 1; i <= n; i++)
                b[tmp2[i]]++, check[i] = 0;

            if (b[1] != even || b[0] != odd) ans2 = INF;
            else {
                int tmp3 = tmp2[2],j=0; vector<int> idx;
                for (int i = 1; i <= n; i++) if (a[i] == tmp3) idx.push_back(i);
                for (int i = 2; i <= n; i += 2) {
                    ans2 += abs(idx[j]-i),j++;
                }
            }
            cout << min(ans,ans2) << "\n";
        }
    }
    return 0;
}
