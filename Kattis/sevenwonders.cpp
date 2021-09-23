#include <bits/stdc++.h>

using namespace std;

signed main() {
    string s; cin >> s;

    int a = 0,b = 0,c = 0;
    for (int i = 0; i < s.size(); i++)
        if (s[i] == 'T') a++;
        else if (s[i] == 'G') b++;
        else c++;

    int ans = 0;
    if (a != 0 && b != 0 && c != 0) {
        ans = 7*min(a,min(b,c));
    }
    cout << a*a + b*b + c*c + ans;
    return 0;
}
