#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6;

pair<int,int> ans[1000005];
bool Prime[MAXN];
int idx = 1;

void sieve() {
    Prime[0] = Prime[1] = true;
    for (int i = 2; i*i <= MAXN; i++)
        if (!Prime[i])
            for (int j = i*i; j <= MAXN; j+=i)
                Prime[j] = true;
    for (int i = 5; i <= MAXN; i++)
        if (Prime[i] == false && Prime[i+6] == false) {
            ans[idx].first = i; ans[idx].second = i+6;
            idx++;
        }
}

signed main() {
    sieve();
    //cout << idx << endl;
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << ans[n].first << " " << ans[n].second << endl;
    }
    return 0;
}
