/*
    Author: sngkhiem
    Created On: 10/30/2021, 4:40:15 PM
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
    int n,m; cin>>n>>m;
    int res = m - n;
    if(res < 0){
    	if(res == -1) cout<<"Dr. Chaz needs "<<-res<<" more piece of chicken!\n";
        else cout<<"Dr. Chaz needs "<<-res<<" more pieces of chicken!\n";
    }
    else{
        if(res == 1)cout<<"Dr. Chaz will have "<<res<<" piece of chicken left over!\n";
        else cout<<"Dr. Chaz will have "<<res<<" pieces of chicken left over!\n";
    }
    return 0; 
}
