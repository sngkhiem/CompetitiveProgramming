/*
    Author: sngkhiem
    Created On: 10/27/2021, 7:25:45 PM
    :( Code mãi nhưng vẫn gà
*/

#include <bits/stdc++.h>

using namespace std;

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define fi first
#define se second
#define vii vector<pair<int,int>>
#define vi vector<int>
#define gcd __gcd

const ll INF = 1e18;
const ll MOD = 1e9+7;
const int dX[] = {1,-1,0,0};
const int dY[] = {0,0,-1,1};

bool check(ll x) {
    for (ll i = 2; i*i <= x; i++) 
        if (x % i == 0) return false;
    return true;
}

signed main() {
    fastIO;
    ll n; cin >> n;
    if (n <= 2) cout << "-1";
    else {
        ll a = 2, b = n-a;
        int flag = 0;
        do {
            b = n-a;
            if (check(a) && check(b)) {
                flag = 1;
                break;
            }
            a++;
        } while (a <= 5569);
        if (flag == 1) cout << a << " " << b;    
        else cout << "-1";
    }
    return 0;
}
