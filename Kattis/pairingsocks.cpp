#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    vector<int> main(2*n),sub;
    for (auto &i: main) cin >> i;

    int cnt = 0;
    while (!main.empty()) {
        cnt++;
        if (sub.empty()) {
            sub.push_back(main.back());
            main.pop_back();
            continue;
        }
        if (sub.back() == main.back()) {
            main.pop_back(); sub.pop_back();
            continue;
        }
        sub.push_back(main.back());
        main.pop_back();
    }
    if (sub.empty()) cout << cnt;
    else cout << "impossible";
    return 0;
}
