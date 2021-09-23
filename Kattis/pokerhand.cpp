#include <bits/stdc++.h>

using namespace std;

unordered_map<char,int> card;

signed main() {
    string a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    card[a[0]]++; card[b[0]]++; card[c[0]]++; card[d[0]]++; card[e[0]]++;
    cout << max(card[a[0]],max(card[b[0]],max(card[c[0]],max(card[d[0]],card[e[0]]))));
    return 0;
}
