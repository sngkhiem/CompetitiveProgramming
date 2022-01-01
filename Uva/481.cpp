#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5+6;

int a[MAXN],p[MAXN];
vector<int> L(MAXN,0),L_id(MAXN,0);

signed main() {
    int tmp,idx = 0,bestEnd;
    while (cin >> tmp) {
        //if (tmp == 0) break;
        a[idx++] = tmp;
    }
    int ans = 0;
    for (int i = 0; i < idx; i++) {
        int pos = lower_bound(L.begin(),L.begin()+ans,a[i]) - L.begin();
        L[pos] = a[i];
        L_id[pos] = i;
        p[i] = pos ? L_id[pos-1] : -1;
        if (pos == ans) {
            ans++;
            bestEnd = i;
        }
    }
    vector<int> lis;
    cout << ans << "\n-\n";
    while (bestEnd != -1) {
        lis.push_back(a[bestEnd]);
        bestEnd = p[bestEnd];
    }
    reverse(lis.begin(),lis.end());
    for (auto x: lis) cout << x << "\n";
    return 0;
}
