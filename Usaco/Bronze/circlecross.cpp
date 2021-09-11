#include <bits/stdc++.h>

using namespace std;

signed main() {
    freopen("circlecross.in","r",stdin); freopen("circlecross.out","w",stdout);
    int Start[91],End[91];
    fill(Start,Start+91,-1); fill(End,End+91,-1);
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++)
        if (Start[int(s[i])] == -1) Start[int(s[i])] = i;
        else End[int(s[i])] = i;

    int ans = 0;
    for (int i = 65; i <= 90; i++) {
        for (int j = 65; j <= 90; j++)
            if (Start[j] > Start[i] && (End[i] < End[j] && End[i] > Start[j] )) ans++;
    }
    cout << ans;
    return 0;
}
