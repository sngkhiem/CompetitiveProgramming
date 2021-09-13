#include <bits/stdc++.h>

using namespace std;

map<char,int> dominant;
map<char,int> nonDominant;

signed main() {
    dominant['A'] = 11; nonDominant['A'] = 11;
    dominant['K'] = 4; nonDominant['K'] = 4;
    dominant['Q'] = 3; nonDominant['Q'] = 3;
    dominant['J'] = 20; nonDominant['J'] = 2;
    dominant['T'] = 10; nonDominant['T'] = 10;
    dominant['9'] = 14; nonDominant['9'] = 0;
    dominant['8'] = 0; nonDominant['8'] = 0;
    dominant['7'] = 0; nonDominant['7'] = 0;

    int n; char posDominant; cin >> n >> posDominant;
    int ans = 0;
    for (int i = 1; i <= 4*n; i++) {
        char cur, curDom; cin >> cur >> curDom;
        if (curDom == posDominant) ans += dominant[cur];
        else ans += nonDominant[cur];
    }
    cout << ans;
    return 0;
}
