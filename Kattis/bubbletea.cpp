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

int costTea[1005];
ll costTotal[10000005];
int costTopping[1005];

signed main() {
    fastIO;
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> costTea[i];
    int m; cin >> m;
    int idx = 0;
    for (int i = 1; i <= m; i++) cin >> costTopping[i];
    for (int i = 1; i <= n; i++) {
        int k; cin >> k;
        for (int j = 0; j < k; j++) {
            int tmp; cin >> tmp;
            costTotal[idx++] = costTea[i] + costTopping[tmp];
        }
    }
    int money; cin >> money;
    sort(costTotal,costTotal + idx);
    money -= costTotal[0];
    cout << money / costTotal[0];
    return 0;
}
