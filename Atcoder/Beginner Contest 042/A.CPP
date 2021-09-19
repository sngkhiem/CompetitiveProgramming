#include <bits/stdc++.h>

using namespace std;

signed main() {
    int a,b,c; cin >> a >> b >> c;
    int cnt = 0; int cnt1 = 0;
    if (a == 5) cnt++;
    if (b == 5) cnt++;
    if (c == 5) cnt++;
    if (a == 7) cnt1++;
    if (b == 7) cnt1++;
    if (c == 7) cnt1++;
    cout << (cnt == 2 && cnt1 == 1 ? "YES" : "NO");
    return 0;
}
