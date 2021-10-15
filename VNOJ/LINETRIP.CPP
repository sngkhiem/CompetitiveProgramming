#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    if (*min_element(a,a+n) == *max_element(a,a+n)) cout << abs(*min_element(a,a+n))*2;
    else if (*min_element(a,a+n) >= 0) cout << *max_element(a,a+n)*2;
    else if (*max_element(a,a+n) < 0) cout << abs(*min_element(a,a+n))*2;
    else cout << abs(*min_element(a,a+n))*2 + abs(*max_element(a,a+n))*2;

    return 0;
}
