#include <bits/stdc++.h>

using namespace std;

const long long MX = 1e15;

long long f[80];

bool check(long long n) {
    if (n == 2 || n == 3) return true;
    if (n < 2 || n % 2 == 0 || n % 3 == 0) return false;
    long long i = 5;
    while (i <= sqrt(n)) {
        if (n % i == 0 || n % (i + 2 ) == 0) return false;
        i += 6;
    }
    return true;
}

signed main() {
    long long a,b; cin >> a >> b;
    int cnt = 0;
    f[0] = 1; f[1] = 1;
    for (int i = 3; i <= 80; i++)
        if (f[i-1] + f[i-2] > MX) break;
        else f[i] = f[i-1] + f[i-2];
    for (int i = 3; i <= 80; i++)
        if (f[i] >= a && f[i] <= b) {
            if (check(f[i])) {
                cnt++;
            }
        } else if (f[i] > b) break;
    cout << cnt;
    return 0;
}
