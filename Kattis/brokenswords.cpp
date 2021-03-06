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
    int t = 0, b = 0, l = 0, r = 0;
    while (n--) {
        char a,b1,c,d;
        cin >> a >> b1 >> c >> d;
        if (a == '0') t++;
        if (b1 == '0') b++;
        if (c == '0') l++;
        if (d == '0') r++;
    }
    int tmp = min(t+b,l+r);
    cout << tmp/2 << " " << (t+b)-(tmp/2*2) << " " << (l+r)-(tmp/2*2);
    return 0;
}
