#include <bits/stdc++.h>

using namespace std;

#define int long long

int preCompute[17];

signed main() {
    preCompute[1] = 2;
    for (int i = 2; i <= 16; i++)
        preCompute[i] = preCompute[i-1]+pow(2,i-2);
    int n; cin >> n;
    cout << preCompute[n+1]*preCompute[n+1];
    return 0;
}
