#include <bits/stdc++.h>

using namespace std;

#define ll long long

signed main() {
    map<string,int> dict;
    int idx = 1;
    for (char i = 'a'; i <= 'z'; i++) {
        for (char j = 'a'; j <= 'z'; j++) {
            if (i == j) continue;
            string tmp;
            tmp += i; tmp += j;
            dict[tmp] = idx++;
        }
    }
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        cout << dict[s] << "\n";
    }
    return 0;
}
