#include <bits/stdc++.h>
#define int long long

using namespace std;

#define int long long
#define fi first
#define se second

bool cmp(pair<int,int> a, pair<int,int> b) {
    if (a.fi == b.fi) return a.se < b.se;
    return a.fi > b.fi;
}

signed main() {
    int n,m; cin >> n >> m;
    char g[2*n+5][m+5];

    for (int i = 1; i <= 2*n; i++)
        for (int j = 1; j <= m; j++)
            cin >> g[i][j];

    pair<int,int> player[2*n+1];
    for (int i = 1; i <= 2*n; i++) player[i] = {0,i};

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= 2*n; j+=2) {
                char a = g[player[j].se][i]; char b = g[player[j+1].se][i];
                if (a == b) {
                    continue;
                }
                if (a == 'G') {
                    if (b == 'C') {
                        player[j].fi++;
                    }
                    if (b == 'P') {
                        player[j+1].fi++;
                    }
                } else if (a == 'C') {
                    if (b == 'G') {
                        player[j+1].fi++;
                    }
                    else if (b == 'P') {
                        player[j].fi++;
                    }
                } else {
                    if (b == 'G') {
                        player[j].fi++;
                    }
                    else if (b == 'C') {
                        player[j+1].fi++;
                    }
                }
        }
        sort(player+1,player+1+2*n,cmp);
        //for (int i = 1; i <= 2*n; i++) cout << player[i].se << "\n";
    }

    for (int i = 1; i <= 2*n; i++) cout << player[i].se << "\n";
    //sort(player+1,player+1+2*n,cmp);
    //for (int i = 1; i <= 2*n; i++) cout << player[i].se << "\n";
}
