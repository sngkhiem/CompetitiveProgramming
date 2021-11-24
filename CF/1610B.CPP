#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6;

int a[MAXN];
int n;

bool check(vector<int> &a) {
    for (int i = 0; i < a.size()/2; i++)
        if (a[i] != a[a.size()-1-i]) return false;
    return true;
}

bool solve() {
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n/2; i++)
        if (a[i] != a[n-i-1]) {
            vector<int> b;
            for (int j = 0; j < n; j++)
                if (a[i] != a[j]) b.push_back(a[j]);
            if (check(b)) return true;
            vector<int> c;
            for (int j = 0; j < n; j++)
                if (a[j] != a[n-i-1]) c.push_back(a[j]);
            if (check(c)) return true;
            return false;
        }
    return true;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        cin >> n;
        cout << (solve() == true ? "YES\n" : "NO\n");
    }
    return 0;
}
