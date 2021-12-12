#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    stack<int> st;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        if (st.size() && tmp % 2 == st.top() % 2) st.pop();
        else st.push(tmp);
    }
    cout << st.size();
    return 0;
}
