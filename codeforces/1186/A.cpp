#include <bits/stdc++.h>

using namespace std;

const int OO = 1e9;


signed main() {
    int n,m,k; cin >> n >> m >> k;
    if (n > min(m,k)) cout << "No";
    else cout << "Yes";
    return 0;
}
