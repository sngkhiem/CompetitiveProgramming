#include <bits/stdc++.h>

using namespace std;

const int maxn = 2e5+5;

#define ll long long

ll area[maxn];
ll a[maxn];
stack<int> memo;

signed main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    ll b;
    for (int i = 0; i < n; i++) {
        while (!memo.empty() && a[memo.top()] >= a[i]) memo.pop();
        if (memo.empty()) b = i + 1;
        else b = i - memo.top();
        area[i] += b * a[i];
        memo.push(i);
    }
    while (!memo.empty()) memo.pop();
    for (int i = n-1; i >= 0; i--) {
        while (!memo.empty() && a[memo.top()] >= a[i]) memo.pop();
        if (memo.empty()) b = n - i;
        else b = memo.top() - i;
        area[i] += (b-1) * a[i];
        memo.push(i);
    }
    cout << *max_element(area,area+n);
    return 0;
}
