#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e7+5;

bool Prime[MAXN];
int ans[MAXN],idx;

void sieve() {
    Prime[0] = Prime[1] = true;
    for (int i = 2; i*i <= MAXN; i++)
        if (!Prime[i])
            for (int j = i*i; j <= MAXN; j+=i)
                Prime[j] = true;
    for (int i = 2; i <= MAXN; i++)
        if (!Prime[i]) ans[idx++] = i;
}

signed main() {
    sieve();
    int n; cin >> n;
    for (int i = 0; i < idx; i++)
        if (ans[i] > n) {
            int n1 = 0;
            int tmp = ans[i];
            while (tmp != 0) {
                int tmp2 = tmp % 10;
                n1 = n1 * 10 + tmp2;
                tmp /= 10;
            }
            if (n1 == ans[i]) {
                cout << ans[i];
                return 0;
            }
        }
    return 0;
}
