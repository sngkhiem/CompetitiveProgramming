/*
    Author: sngkhiem
    Created On: 10/31/2021, 8:23:34 PM
*/

#include <bits/stdc++.h>

using namespace std;

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define gcd __gcd
#define endl "\n"

typedef long long int ll;
typedef pair<ll,ll> ii;
typedef vector<pair<int,int>> vii;
typedef vector<pair<ll,ll>> vll;

const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 1e9+7;
const int dX[] = {1,-1,0,0};
const int dY[] = {0,0,-1,1};

signed main() {
    fastIO;
    int r, c; cin >> r >> c;
    char grid[r+2][c+2];
    for (int i = 1; i <= r; i++)
        for (int j = 1; j <= c; j++)
            cin >> grid[i][j];
    
    int cnt = 0;
    int i = 1, j = 1;
    while (cnt <= 100000) {
        if (i <= 0 || j <= 0 || i > r || j > c) {
            cout << "Out"; return 0;
        }
        if (grid[i][j] == 'T') {
            cout << cnt; return 0;
        }
        if (grid[i][j] == 'N') i--;
        else if (grid[i][j] == 'S') i++;
        else if (grid[i][j] == 'W') j--;
        else if (grid[i][j] == 'E') j++;
        cnt++;
    }
    cout << "Lost";
    return 0;
}
