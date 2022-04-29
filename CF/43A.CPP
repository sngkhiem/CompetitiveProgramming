#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    unordered_map<string,int> freq;
    while (n--) {
        string s; cin >> s;
        freq[s]++;
    }
    string name;
    int mx = -1;
    for (auto x: freq) {
        if (mx < x.second) mx=x.second,name=x.first;
    }
    cout << name;
    return 0;
}
