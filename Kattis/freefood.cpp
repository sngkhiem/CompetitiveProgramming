#include <bits/stdc++.h>

using namespace std;

bool mark[366];

signed main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int a,b; cin >> a >> b;
        for (int i = a; i <= b; i++) mark[i] = true;
    }
    int cnt = 0;
    for (int i = 1; i <= 365; i++)
        if (mark[i]) cnt++;
    cout << cnt;
    return 0;
}
