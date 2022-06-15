/*
    Author: Tran Hoang Khiem
    School: Nguyen Thi Minh Khai High School
*/
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int freq[10];

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int freq[10]; for (int i = 0; i <= 9; i++) freq[i] = 0;
        for (int i = 1; i <= n; i++) {
            int cur; cin >> cur;
            freq[cur%10]++;
        }
        string ans = "NO\n";
        for (int i = 0; i <= 9; i++) {
            freq[i]--;
            for (int j = 0; j <= 9; j++) {
               freq[j]--;
               for (int k = 0; k <= 9; k++) {
                    freq[k]--;
                    if ((i+j+k)%10==3 && freq[i] >= 0 && freq[j] >= 0 && freq[k] >= 0) ans = "YES\n";
                    freq[k]++;
               }
               freq[j]++;
            }
            freq[i]++;
        }
        cout << ans;
    }
    return 0;
}

