#include <bits/stdc++.h>

using namespace std;

int d[42];

signed main() {
    for (int i = 0; i < 10; i++) {
        int a; cin >> a;
        d[a%42]++;
    }

    int cnt = 0;
    for (int i = 0; i <= 41; i++)
        if (d[i] > 0) cnt++;
    cout << cnt;
    return 0;
}
