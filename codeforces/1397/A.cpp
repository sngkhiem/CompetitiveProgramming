#include <bits/stdc++.h>

using namespace std;

//#define int long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

//const int INF = 1e18;

signed main() {
    fastIO;
    int t; cin >> t;
    while (t--) {
        int p[1005],flag=0;
        fill(p,p+1004,0);
        int n; cin >> n;
        for (int i = 0; i < n; i++) {
            string s; cin >> s;
            for (int j = 0; j < s.size(); j++) p[int(s[j])]++;
        }
        for (int i = 0; i < 1004; i++)
            if (p[i] % n != 0) {
                flag = 1; cout << "NO\n"; break;
            } 
        if (flag == 0) cout << "YES\n";
    }
    return 0;
}