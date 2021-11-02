/*
    Author: sngkhiem
    Created On: 11/1/2021, 10:40:11 AM
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

int calc(char *name) {
    int total = 0, tmp;
    while (*name) {
        if (*name >= 'a' && *name <= 'z') 
            total += *name-96;
        else if (*name >= 'A' && *name <= 'Z')
            total += *name - 64;
        name++;
    }

    while (total >= 10) {
        tmp = 0;
        while (total) {
            tmp += total % 10;
            total /= 10;
        }
        total = tmp;
    }
    return total;
}

signed main() {
    fastIO;
    char a[30], b[30];
    int c,d;
    while (gets(a)) {
        gets(b);
    //    if (a[0] == '0') break;
        c = calc(a); d = calc(b);
        double c1 = min(c,d), d1 = max(c,d);
        cout << setprecision(2) << fixed << (c1/d1)*100.0 << " %\n";
    }
    return 0;
}
