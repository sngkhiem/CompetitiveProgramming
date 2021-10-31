/*
    Author: sngkhiem
    Created On: 10/30/2021, 6:24:19 PM
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
    string s;
    int cnt = 0;
    while (cin >> s && s != "#") {
        cnt++;
        if (s == "HELLO") cout << "Case " << cnt << ": ENGLISH\n";
        else if (s == "HOLA") cout << "Case " << cnt << ": SPANISH\n";
        else if (s == "HALLO") cout << "Case " << cnt << ": GERMAN\n";    
        else if (s == "BONJOUR") cout << "Case " << cnt << ": FRENCH\n";
        else if (s == "CIAO") cout << "Case " << cnt << ": ITALIAN\n";
        else if (s == "ZDRAVSTVUJTE") cout << "Case " << cnt << ": RUSSIAN\n";
        else cout << "Case " << cnt << ": UNKNOWN\n";
    }
    return 0;
}
