#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e7;

int Prime[MAXN];

void sieve() {
    for (int i = 2; i*i <= MAXN; i++)
        if (Prime[i] == 0)
            for (int j = i*i; j <= MAXN; j+=i)
                if (Prime[j] == 0)
                    Prime[j] = i;
    for (int i = 2; i <= MAXN; i++)
        if (Prime[i] == 0) Prime[i] = i;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    long long total = 0;
    cout << n;
    sieve();
    for (int i = 4; i <= n; i++) {
        int cnt = 0;
        int tmp = i;
        if (i / Prime[i] == 1) continue;
        while (true) {
            cnt++;
            tmp /= Prime[tmp];
            if (tmp == 1) break;
        }
        if (cnt == 2) total += i;
    }
    cout << " " << total;
    return 0;
}
