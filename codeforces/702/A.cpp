#include <bits/stdc++.h>

using namespace std;

const int OO = 1e9;

int n,a[100005],len[100005];

signed main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    fill(len+1,len+1+n,1);
    for (int i = 1; i < n; i++)
        if (a[i+1]>a[i]) len[i+1] = len[i]+1;

    cout << *max_element(len+1,len+1+n);
    return 0;
}
