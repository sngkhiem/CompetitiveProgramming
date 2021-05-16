//Author : Trieu self-destruct
//TST next year

#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

//using namespace __gnu_pbds;

using namespace std;

/*Pragma*/
//#pragma GCC optimize("Ofast")
//#pragma GCC optimize("O3")
//#pragma GCC target("avx,avx2,fma")
//#pragma GCC optimization ("unroll-loops")
//#pragma GCC optimize("Os")

/*Weird define*/
#define endl '\n'
#define gcd __gcd
#define count1 __builtin_popcount
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define p prev

/*For define*/
#define For(i,a,b) for(int i=a;i<=b;i++)
#define foR(i,a,b) for(ll i=a;i>=b;i--)
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define forN(i,a,b,c) for(ll i=a;i<=b;i+=c)
#define foRN(i,a,b,c) for(ll i=a;i>=b;i-=c)
#define fora(i, a) for (auto i : a)

/*push-pop-pair define*/
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define x first
#define y second

/*Print define*/
#define write(a, l, r) for (ll ik = l; ik <= r; ik++) cout << a[ik] << ' '; cout << endl
#define writeln(a, l, r) for (ll ik = l; ik <= r; ik++) cout << a[ik] << endl

/*Type-def*/
typedef long long ll;
typedef unsigned long long 	ull;
typedef vector<ll> 		vi;
typedef pair<ll, ll>		ii;
typedef long double         ld;

/*some const*/
const ll IMA = LLONG_MAX-10;
const ll IMI = LLONG_MIN+10;
const ll INF = INT_MAX-10;
const ll MOD = 1000000007;

/* Calculation with MODULO*/
ll dec(ll x, ll y) {return (x-y+MOD)%MOD;}
ll add(ll x, ll y) {return (x + y) % MOD;}
ll mul(ll x, ll y) {return ((x%MOD) * (y%MOD)) % MOD;}
ll bpow(ll x, ll y) {ll res = 1; while (y) {if (y & 1) res = mul(res, x); x = mul(x, x); y >>= 1;} return res;}
ll ModInverse(ll x) {return bpow(x, MOD - 2);}
ll Div(ll x, ll y) {return mul(x, ModInverse(y));}
ll GetBit(ll val, ll num) {return ((val>>num) & 1LL);}

/*Some simple checking and calculation function*/
string yn(bool k){if (k) return "Yes"; else return "No";}
ll binpower(ll base, ll e, ll mod) {ll result = 1;base %= mod;while (e){if (e & 1)result = (ll)result * base % mod;base = (ll)base * base % mod;e >>= 1;    }return result;}
bool check_composite(long long n, long long a, long long d, int s) {long long x = binpower(a, d, n); if (x == 1 || x == n - 1)return false;for (int r = 1; r < s; r++) {x = (long long)x * x % n;if (x == n - 1)return false;}return true;};
bool checkprime(long long n) {if (n < 2)return false;int r = 0;long long d = n - 1;while ((d & 1) == 0) {d >>= 1;r++;}for (int a : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}) {if (n == a)return true;if (check_composite(n, a, d, r))return false;}return true;}
bool checksqr(ll k){return (trunc(sqrt(k))*trunc(sqrt(k))==k);}
ll lcm(ll a, ll b){return (a*b)/gcd(a,b);}

const int N=5e3+10;
int a[N], f[N], dis[N][N], dp[N][N], mi[N][N];
vector <int> pos1,pos0;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //freopen("input.inp","r",stdin);
    //freopen("output.out","w",stdout);
    int n,cnt=0;
    cin >> n;
    pos0.pb(0); pos1.pb(0);
    For(i,1,n){
        cin >> a[i];
        if (a[i]) pos1.pb(i), cnt++;
        else pos0.pb(i);
    }
    if (cnt==0) {cout << 0; return 0;}
    if (cnt==1) {cout << 1; return 0;}
    For(i,1,n) For(j,1,n){
        if (a[i]==1 && a[j]==0) dis[i][j]=abs(i-j);
        else dis[i][j]=1e9;
        dp[i][j]=1e9;
    }
    For(i,0,n) For(j,0,n) mi[i][j]=1e9;
    For(i,1,pos0.size()-1) {
        dp[1][i]=dis[pos1[1]][pos0[i]];
        mi[1][i]=min(dp[1][i],mi[1][i-1]);
    }
    For(i,2,pos1.size()-1){
        For(j,i,pos0.size()-1){
            dp[i][j]=dis[pos1[i]][pos0[j]]+mi[i-1][j-1];
            mi[i][j]=min(dp[i][j],mi[i][j-1]);
        }
    }
    int res=1e9;
    For(i,1,pos0.size()-1) res=min(res,dp[cnt][i]);
    cout << res; //<< endl;
    return 0;
}