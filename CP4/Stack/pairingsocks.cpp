#include <bits/stdc++.h>

using namespace std;

stack<int> socks1,socks2;

signed main() {
    int n; cin >> n;
    n*=2;
    for (int i = 1; i <= n; i++) {
        int tmp; cin >> tmp;
        socks1.push(tmp);
    }
    int cnt = 0;
    while (!socks1.empty()) {
        cnt++;
        if (socks2.empty()) socks2.push(socks1.top()),socks1.pop();
        else if (socks1.top() == socks2.top()) socks1.pop(),socks2.pop();
        else socks2.push(socks1.top()),socks1.pop();
    }
    if (socks2.empty()) cout << cnt;
    else cout << "impossible";
    return 0;
}
