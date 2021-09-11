#include <bits/stdc++.h>

using namespace std;

#define int long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

const int INF = 1e18;

signed main() {
    fastIO;
    int a,b,c,d; 
    cin >> a >> b >> c >> d;
    if (max(a,max(b,c))-min(a,min(b,c)) <= d) cout << "Yes";
    else cout << "No";
    return 0;
}