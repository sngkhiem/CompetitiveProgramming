#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MAXN = 2*1e5+5;

pair<int,int> nums[MAXN];

signed main() {
    int n,x; cin >> n >> x;
    for (int i = 1; i <= n; i++) {
        int curNum; cin >> curNum;
        nums[i] = {curNum,i};
    }

    sort(nums+1,nums+1+n);
    for (int i = 1; i <= n; i++) {
        int l = 1, r = n;
        while (l<=r) {
            int m = (l+r)/2;
            if (nums[m].first+nums[i].first == x && i != m) {
                cout << nums[m].second << " " << nums[i].second; return 0;
            } else if (nums[m].first+nums[i].first > x) r = m-1;
            else l = m+1;
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}
