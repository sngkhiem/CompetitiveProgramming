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
#define set(a) memset(a,0,sizeof a)
#define endl "\n"

typedef long long int ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
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
        cin.ignore();
        int n,m; cin >> n >> m;
        int a[n],b[m];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        sort(a,a+n); sort(b,b+m);
        int i = 0, j = 0;
        while (i < n && j < m) {
            if (a[i] > b[j]) j++;
            else if (a[i] < b[j]) i++;
            else j++;
        }
        if (i == n) cout << "MechaGodzilla\n";
        else if (j == m) cout << "Godzilla\n";
    }
    return 0;
}
