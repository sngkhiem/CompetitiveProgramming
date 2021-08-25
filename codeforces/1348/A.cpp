#include <bits/stdc++.h>

using namespace std;

const int OO = 1e9;

signed main() {
    int t; cin >> t;
    long long a[31];
    for (int i = 1; i <= 30; i++) a[i] = pow(2,i);
    while (t--) {
        int n,sum=0,sum2=0; cin >> n;
        for (int i = 1; i < n/2; i++)
            sum += a[i];
        for(int i = n/2; i < n; i++)
            sum2 += a[i];
        cout << sum+a[n]-sum2 << endl;
    }
    return 0;
}
