/*
    Author: sngkhiem
    Created On: 10/31/2021, 6:38:19 PM
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

int n;

bool check(int i, int j) {
    int sum = 0, cur = 0;
    if (i+j == n) return true;
    while (sum < n) {
        if (cur % 2 == 0) sum += i;
        else sum += j;
        cur++;
    }
    if (sum == n) return true;
    return false;
}

signed main() {
    cin >> n;
    cout << n << ":\n";
    for (int i = 2; i <= n/2+1; i++)
        for (int j = i-1; j <= i; j++)
            if (check(i,j)) 
                cout << i << "," << j << "\n";
    return 0;
}
