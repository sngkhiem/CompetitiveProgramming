#include <bits/stdc++.h>

using namespace std;

void solve(int n, int a, int b, int c) {
    if (n == 1) {
        cout << a << " " << b << "\n";
        return;
    }
    solve(n-1,a,c,b);
    cout << a << " " << b << "\n";
    solve(n-1,c,b,a);
}

signed main() {
    int n; cin >> n;
    cout << pow(2,n)-1 << "\n";
    solve(n,1,3,2);
    return 0;
}
