#include <bits/stdc++.h>

using namespace std;

bool check(int x) {
    if (x < 2) return false;
    for (int i = 2; i*i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

bool check2(int x) {
    int ans = 1;
    for (int i = 2; i*i <= x; i++)
        if (x % i == 0) ans += (x/i + i);
    if (sqrt(x) == round(sqrt(x))) ans -= sqrt(x);
    return (ans == x ? true : false);
}

signed main() {
    int n; cin >> n;
    vector<int> q1,q2,q3;
    for (int i = 0; i < n; i++) {
        int cur; cin >> cur;
        if (check(cur)) q1.push_back(cur);
        if (check2(cur)) q2.push_back(cur);
        if (sqrt(cur)== ceil(sqrt(cur))) q3.push_back(cur);
    }

    for (auto x: q1) cout << x << " ";
    cout << "\n";

    for (auto x: q2) cout << x << " ";
    cout << "\n";

    for (auto x: q3) cout << x << " ";
    cout << "\n";
    return 0;
}
