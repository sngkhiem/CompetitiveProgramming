/*
    Author: Tran Hoang Khiem
    School: Nguyen Thi Minh Khai High School
*/
#include <bits/stdc++.h>

using namespace std;

#define all(a) a.begin(),a.end()
#define ll long long

const int maxn = 1e5+5;

int n;
int a[maxn],b[maxn];
int init1, init2;

bool check(int x) {
    int newGet = (x+n) - (x+n)/4;
    int new1 = 0, new2 = 0;
    int idx1 = 1, idx2 = 1;
    for (int i = 1; i <= newGet; i++) {
        if (i <= x) new1 += 100;
        else new1 += a[idx1++];

        if (idx2 <= n) new2 += b[idx2++];
    }
    return (new1 >= new2);
}

signed main() {
    int t; cin >> t;
    while (t--) {
        init1 = init2 = 0;
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];
        sort(a+1,a+1+n,greater<int>()); sort(b+1,b+1+n,greater<int>());
        for (int i = 1; i <= n - n/4; i++) init1+=a[i],init2+=b[i];

        if (init1 >= init2) cout << "0\n";
        else {
            int lo = 1, hi = 1e5, ans = 0;
            while (lo <= hi) {
                int mid = (lo+hi)/2;
                if (check(mid)) ans = mid, hi = mid - 1;
                else lo = mid + 1;
            }
            cout << ans << "\n";
        }
    }
    return 0;
}

