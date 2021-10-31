/*
    Author: sngkhiem
    Created On: 10/31/2021, 7:30:43 PM
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
    while (cin >> s) {
        if (s == "END") break;
        
        if (s.size() == 1) {
            int tmp = stoi(s,0,10);
            if (tmp == s.size()) {
                cout << "1\n";
                continue;
            }
        }
            
        int i = 2;
        int prev = s.size(); int cur;
        string tmp;
        while (1) {
            tmp = to_string(prev);
            cur = tmp.size();
            if (cur == prev) {
                cout << i << endl; break;
            } else {
                i++;
                prev = cur;
            }
        }
    }
    
    return 0;
}
