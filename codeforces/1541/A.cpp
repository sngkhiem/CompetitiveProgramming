#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int nums[n+1];
        for (int i = 1; i <= n; i++) nums[i] = i;
        for (int i = 1; i < n; i += 2) swap(nums[i],nums[i+1]);
        if (n % 2 == 1) swap(nums[n],nums[n-2]);
        for (int i = 1; i <= n; i++) cout << nums[i] << " ";
        cout << "\n";
    }
    return 0;
}
