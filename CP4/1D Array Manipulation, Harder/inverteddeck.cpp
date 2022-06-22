#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n; int a[n+1];
    for (int i = 1; i <= n; i++) cin >> a[i];
    if (is_sorted(a+1,a+1+n)) {cout << "1 1"; return 0;}
    int left,right;
    for (int i = 1; i < n; i++) if (a[i] > a[i+1]) {left = i; break;}
    for (int i = n; i > 1; i--) if (a[i] < a[i-1]) {right = i; break;}
    while (a[left] == a[left-1] && left-1 >= 1) left--;
    while (a[right] == a[right+1] && right+1 <= n) right++;
    reverse(a+left,a+right+1);
    if (is_sorted(a+1,a+1+n)) cout << left << " " << right;
    else cout << "impossible";
    return 0;
}
