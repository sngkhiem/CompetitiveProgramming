/*
    Author: sngkhiem
    Created On: 11/13/2021, 10:59:42 AM
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

ll binpow(ll a, ll b) {ll ans = 1;while (b != 0){if (b % 2 == 1) ans = ans*a; a *= a; b >>= 1; } return ans; }
ll binpowMod(ll a, ll b, ll MOD) {ll ans = 1;while (b != 0){if (b % 2 == 1) ans = (ans*a)%MOD; a = (a*a)%MOD; b >>= 1; } return ans; }
bool isPrime(ll n) { if (n < 2) return false; for (int i = 2; i*i <= n; i++) if (n % i == 0) return false; return true; }
ll lcm(ll a, ll b) { return (a*b) / gcd(a,b); }


signed main() {
    fastIO;
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n+1];
        int ans[n+1];
        set(ans);
        for (int i = 1; i <= n; i++) cin >> a[i];
        int r = n; int l = 1;
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 1) {
                ans[i] = a[l];
                l++;
            }
            else {
                ans[i] = a[r];
                r--;
            }
        } 
        for (int i = 1; i <= n; i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
