#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    int n; cin >> n;
    if (n*(n+1)/2 % 2 != 0) cout << "NO\n";
    else {
        int total = n*(n+1)/2;
        cout << "YES\n";
        unordered_set<int> nums;
        nums.reserve(n);
        int sum = 0;
        int cur = n;
        while (sum < total/2) {
            nums.insert(cur);
            sum += cur;
            cur--;
        }
        if (sum > total/2) {
            sum -= (cur+1);
            //assert(sum < total/2);
            nums.erase(nums.find(cur+1));
            nums.insert(total/2-sum);
        }
        cout << nums.size() << "\n";
        for (auto x: nums) cout << x << " ";
        cout << "\n";

        cout << n - nums.size() << "\n";
        for (int i = 1; i <= n; i++)
            if (nums.find(i) == nums.end())
                cout << i << " ";
    }

    return 0;
}
