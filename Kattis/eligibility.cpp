/*
    Author: sngkhiem
    Created On: 10/31/2021, 7:40:58 AM
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
    int t; cin >> t;
    while (t--) {
        string name, secondary, dob, cnt;
        cin >> name >> secondary >> dob >> cnt;
        string tmp = ""; int tmp2;
        tmp.append(secondary,0,4);
        tmp2 = stoi(tmp,0,10);
        if (tmp2 >= 2010) {
            cout << name << " eligible\n";
            continue;
        }
        string tmp3 = "";
        tmp3.append(dob,0,4);
        tmp2 = stoi(tmp3,0,10);
        if (tmp2 >= 1991) {
            cout << name << " eligible\n";
            continue;
        }
        string tmp4 = "";
        tmp4.append(cnt,0,cnt.size());
        //cout << tmp4;
        tmp2 = stoi(tmp4,0,10);
        if (tmp2 >= 41) 
            cout << name << " ineligible\n";
        else cout << name << " coach petitions\n";

    }
    return 0;
}
