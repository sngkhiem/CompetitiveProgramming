#include <bits/stdc++.h>

using namespace std;

signed main() {
    stack<int> cards;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        if (cards.size() && tmp % 2 == cards.top() % 2) cards.pop();
        else cards.push(tmp);
    }
    cout << cards.size();
    return 0;
}
