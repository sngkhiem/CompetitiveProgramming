#include <bits/stdc++.h>

using namespace std;

signed main() {
    map<string,bool> mark;
    vector<string> chatList,memo;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string tmp; cin >> tmp;
        memo.push_back(tmp);
    }
    reverse(memo.begin(),memo.end());
    for (auto x: memo) {
        if (!mark[x]) chatList.push_back(x),mark[x]=true;
    }
    for (auto x: chatList) cout << x << "\n";
    return 0;
}
