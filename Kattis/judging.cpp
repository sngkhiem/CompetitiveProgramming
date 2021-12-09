#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    vector<string> dom,kattis;
    for (int i = 0; i < n; i++) {
        string tmp; cin >> tmp;
        dom.push_back(tmp);
    }
    for (int i = 0; i < n; i++) {
        string tmp; cin >> tmp;
        kattis.push_back(tmp);
    }
    sort(dom.begin(),dom.end()); sort(kattis.begin(),kattis.end());
    int cnt = 0;
    while (dom.size() > 0 && kattis.size() > 0) {
        if (dom.back() == kattis.back()) {
            cnt++;
            dom.pop_back(); kattis.pop_back();
        } else if (dom.back() > kattis.back()) dom.pop_back();
        else kattis.pop_back();
    }
    cout << cnt;
    return 0;
}
