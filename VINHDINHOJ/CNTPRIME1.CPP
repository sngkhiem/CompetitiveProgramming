#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6+5;

bool Prime[MAXN];
int ans[MAXN];
int idx = 1;

void sieve() {
    memset(Prime,true,sizeof Prime);
    Prime[0] = Prime[1] = true;
    for (int i = 2; i*i <= MAXN; i++)
        if (Prime[i])
            for (int j = 2*i; j <= MAXN; j+=i)
                Prime[j] = false;
    for (int i = 2; i <= MAXN; i++)
        if (Prime[i]) ans[idx++] = i;
}

signed main() {
    int t; cin >> t;
    sieve();
    while (t--) {
        int a,b; cin >> a >> b;
        int cnt = 0;
        for (int i = 1; i < idx; i++)
            if (ans[i] >= a && ans[i] <= b) cnt++;
            else if (ans[i] > b) break;
        cout << cnt << "\n";
    }
    return 0;
}
