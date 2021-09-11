#include <bits/stdc++.h>

using namespace std;

signed main() {
    int testCase; cin >> testCase;
    while (testCase--) {
        map<string,int> city;
        int ans = 0;
        int numsCity; cin >> numsCity;
        while (numsCity--) {
            string curCity; cin >> curCity;
            city[curCity]++;
        }
        for (auto x: city) ans++;
        cout << ans << "\n";
        city.clear();
    }
    return 0;
}
