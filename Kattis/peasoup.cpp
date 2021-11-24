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
    while (n--) {
        int k; cin >> k;
        cin.ignore();
        string name;
        getline(cin,name);
        int a = 0, b = 0;
        for (int i = 0; i < k; i++) {
            string tmp;
            getline(cin,tmp);
            if (tmp == "pea soup") a = 1;
            if (tmp == "pancakes") b = 1;
        }

        if (a == b && a == 1) {
            cout << name << endl;
            return 0;
        }

    }
    cout << "Anywhere is fine I guess";
    return 0;
}
