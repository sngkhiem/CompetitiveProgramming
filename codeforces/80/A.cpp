#include <bits/stdc++.h>

using namespace std;

const int OO = 1e9;

int ans;

bool check(int n) {
    if (n < 2) return false;
    for (int i =2; i*i <= n; i++)
        if (n%i==0) return false;
    return true;
}

signed main() {
    int n,m; cin >> n >> m;
    do {
        n++;
    } while (!check(n));
    if (n != m) cout << "NO";
    else cout << "YES";
    return 0;
}
