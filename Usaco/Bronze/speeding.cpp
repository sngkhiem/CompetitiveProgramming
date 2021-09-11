#include <bits/stdc++.h>

using namespace std;

#define int long long

int speedLimit[101], bessieSpeed[101];

signed main() {
    freopen("speeding.in","r",stdin); freopen("speeding.out","w",stdout);
    int n,m; cin >> n >> m;
    int curPos = 0;
    for (int i = 0; i < n; i++) {
        int length,speed; cin >> length >> speed;
        for (int j = 0; j < length; j++) {
            speedLimit[curPos] = speed;
            curPos++;
        }
    }

    curPos = 0;
    for (int i = 0; i < m; i++) {
        int length,speed; cin >> length >> speed;
        for (int j = 0; j < length; j++) {
            bessieSpeed[curPos] = speed;
            curPos++;
        }
        //curPos = curPos + length;
    }

    int ans = 0;
    for (int i = 0; i < 100; i++)
        ans = max(ans,bessieSpeed[i]-speedLimit[i]);
    cout << ans;
    return 0;
}
