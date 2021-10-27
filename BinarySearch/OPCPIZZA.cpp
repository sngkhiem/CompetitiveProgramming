/*
    Author: sngkhiem
    Created On: 10/27/2021, 10:08:46 AM
    :( Code mãi nhưng vẫn gà
*/

#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define fi first
#define se second
#define vii vector<pair<int,int>>
#define vi vector<int>
#define gcd __gcd

const ll INF = 1e18;
const ll MOD = 1e9+7;
const int dX[] = {1,-1,0,0};
const int dY[] = {0,0,-1,1};

signed main() {
    fastIO;
    int numTest; cin >> numTest;
    while (numTest--) {
        ll n,m; cin >> n >> m;
        ll cost[n];
        for (int i = 0; i < n; i++) cin >> cost[i];
        sort(cost,cost+n);
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            int left = i+1, right = n-1;
            while (left <= right) {
                int mid = (left+right)/2;
                if (cost[mid]+cost[i] == m) {
                    cnt++; break;
                } else if (cost[mid]+cost[i] < m) left = mid + 1;
                else right = mid - 1;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
