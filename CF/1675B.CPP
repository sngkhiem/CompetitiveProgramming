#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fi first
#define se second

int n;

bool check(int a[]) {
    for (int i = 0; i < n-1; i++)
        if (a[i] < a[i+1]) continue;
        else return false;
    return true;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        cin >> n;
        int a[n],b[n];
        int cnt1=0,cnt2=0,cnt3=0,cnt4=0;
        for (int i = 0; i < n; i++) {
            cin >> a[i]; b[i] = a[i];
            if (a[i] == 0) cnt2++;
        }
        if (check(a)) cout << "0\n";
        else {
            for (int i = 0; i < n-1; i++) {
                if (a[i] >= a[i+1]) {
                    while (a[i] >= a[i+1] && a[i] > 0) {
                        a[i] /= 2; cnt1++;
                        if (a[i] == 0) cnt2++;
                    }
                    for (int j = i; j >= 1; j--) {
                        if (a[j-1] >= a[j]) {
                            while (a[j-1] >= a[j] && a[j-1] > 0) {
                                a[j-1] /= 2; cnt1++;
                                if (a[j-1] == 0) cnt2++;
                            }
                        }
                    }
                }
                if (cnt2 >= 2) break;

            }

            for (int i = n-1; i >= 1; i--) {
                if (b[i-1] >= b[i]) {
                    while (b[i-1] >= b[i] && b[i-1] > 0) {
                        b[i-1] /= 2; cnt3++;
                        if (b[i-1] == 0) cnt4++;
                    }
                }
                if (cnt4 >= 2) break;
            }

            if (cnt2 >= 2 || cnt4 >= 2) cout << "-1\n";
            else cout << min(cnt1,cnt3) << "\n";
        }
    }
    return 0;
}

