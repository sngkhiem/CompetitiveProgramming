#include <bits/stdc++.h>

using namespace std;

signed main() {
    char a[5]; memset(a,0,sizeof a);
    cin >> a;
    bool same = true, step = true;
    for (int i = 0; i < 3; i++) {
        if (a[i] != a[i+1]) same = false;
        if (((a[i]+1)%10) != (a[i+1]%10)) step = false;
    }
    if (same || step) cout << "Weak";
    else cout << "Strong";
    return 0;
}
