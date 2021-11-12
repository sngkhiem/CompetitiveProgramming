/*
    Author: sngkhiem
    Created On: 11/10/2021, 9:08:39 PM
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

char s[7][50];

signed main() {
    fastIO;
    int n; cin >> n;
    getchar();
    for (int i = 0; i < 5; i++) gets(s[i]);
    for (int i = 0; i < 4*n; i+=4) {
        if (s[1][i+1] == '*') cout << "1";
        else if (s[3][i] == '*') cout << "2";
        else cout << "3";
    }
    puts("");
    return 0;
}
