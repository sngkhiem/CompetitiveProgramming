/*
    Author: sngkhiem
    Created On: 11/10/2021, 4:22:50 PM
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
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int cur = 0;
        int move[105];
        memset(move,0,sizeof move);
        string a,b; int tmp;
        for (int i = 0; i < n; i++) {
            cin >> a;
            if (a.size() == 5) {
                cur++;
                move[i+1] = 1;
            } else if (a.size() == 4 && a[0] == 'L') {               
                cur--;
                move[i+1] = -1;
            } else {
                cin >> b >> tmp;
                cur += move[tmp];
                move[i+1] = move[tmp]; 
            }
        }
        cout << cur << endl;

    }
    return 0;
}
