#include <bits/stdc++.h>

using namespace std;

#define int long long

map<string,int> arr;

signed main() {
    int numQuery; cin >> numQuery;
    while (numQuery--) {
        int kindQuery, k, v;
        cin >> kindQuery;
        if (kindQuery == 0) cin >> k >> v;
        else cin >> k;
        string element = to_string(k);
        if (kindQuery == 0) arr[element] = v;
        else cout << arr[element] << "\n";
    }
}
