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
    int n; cin >> n;
    string s; cin >> s;
    int bruno = 0, adrian = 0, goran = 0;
    char a[3] = {'A','B','C'};
    char b[4] = {'B','A','B','C'};
    char c[6] = {'C','C','A','A','B','B'};
    for (int i = 0; i < n; i++) {
        if (a[i % 3] == s[i]) adrian++;
        if (b[i % 4] == s[i]) bruno++;
        if (c[i % 6] == s[i]) goran++;
    }
    int ans = max(adrian,max(bruno,goran));
    cout << ans << endl;
    if (adrian == ans) cout << "Adrian\n";
    if (bruno == ans) cout << "Bruno\n";
    if (goran == ans) cout << "Goran\n";
    return 0;
}
