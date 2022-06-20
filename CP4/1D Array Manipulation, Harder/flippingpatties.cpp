#include <bits/stdc++.h>

using namespace std;

int freq[43205];

signed main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int a,b; cin >> a >> b;
        freq[b]++; freq[b-a]++; freq[b-a*2]++;
    }
    int mx = -1;
    for (int i = 1; i <= 43200; i++) mx = max(mx,freq[i]);
    cout << (mx % 2 == 0 ? mx/2 : mx/2+1);
    return 0;
}
