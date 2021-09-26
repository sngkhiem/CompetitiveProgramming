#include <bits/stdc++.h>

#define int long long

using namespace std;

int toDec(int k, string a) {
    int ans = 0;
    reverse(a.begin(),a.end());
    for (int i = 0; i < a.length(); i++)
        if (a[i] != '0') ans += ((a[i]-'0')*pow(k,i));
    return ans;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int k; cin >> k;
    string a,b; cin >> a >> b;
    cout << toDec(k,a)*toDec(k,b);
    return 0;
}
