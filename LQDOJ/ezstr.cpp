#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        char tmp; cin >> tmp;
        if (tmp == '1') cnt1++;
    }
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int cur; cin >> cur;
        if ((cnt1 >= cur && cur != 0) || (cur == 0 && cnt1 < n)) cout << "Ami Dep Trai\n";
        else cout << "Luong Xiao Lin\n";
    }
    return 0;
}
