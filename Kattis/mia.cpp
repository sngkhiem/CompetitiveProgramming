/*
    Author: sngkhiem
    Created On: 10/31/2021, 7:07:32 PM
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
    string a,b,c,d;
    while (cin >> a >> b >> c >> d) {
        if (a == "0" && b == "0" && c == "0" && d == "0") break;
        if ((a == "1" && b == "2") || (b == "1" && a == "2")) {
            if ((c == "1" && d == "2") || (c == "2" && d == "1"))
                cout << "Tie.\n";
            else cout << "Player 1 wins.\n";
        } else if ((c == "1" && d == "2") || (c == "2" && d == "1")) {
             if ((a == "1" && b == "2") || (a == "2" && b == "1"))
                cout << "Tie.\n";
            else cout << "Player 2 wins.\n";
        } else {
            if (a == b) {
                if (c == d) {
                    if (a == c) cout << "Tie.\n";
                    else if (a < c) cout << "Player 2 wins.\n";
                    else if (a > c) cout << "Player 1 wins.\n";
                }
                else cout << "Player 1 wins.\n";
            } else  if (c == d) {
                if (a == b) {
                    if (a == c) cout << "Tie.\n";
                    else if (a < c) cout << "Player 2 wins.\n";
                    else if (a > c) cout << "Player 1 wins.\n"; 
                }
                else cout << "Player 2 wins.\n";
            } else {
                int a1,b1,c1,d1; int e,f;
                a1 = stoi(a,0,10); b1 = stoi(b,0,10);
                c1 = stoi(c,0,10); d1 = stoi(d,0,10);
                e = max(a1,b1)*10+min(a1,b1);
                f = max(c1,d1)*10+min(c1,d1);
                if (e == f) cout << "Tie.\n";
                else if (e > f) cout << "Player 1 wins.\n";
                else cout << "Player 2 wins.\n";
            }
        }
        
    }
    return 0;
}
