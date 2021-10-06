#include <bits/stdc++.h>

using namespace std;

int a[10];

signed main() {
    int idx = 0;
    char cur;
    while (cin >> cur) {
        a[idx++] = cur-'0';
    }
    int ma = -1;
    sort(a,a+idx);
    int b[idx];
    do {
        for (int i = 0; i < idx; i++) b[i] = a[i];
        sort(b,b+idx,greater<int>());
        if (a[0] == 0) continue;
        int sum = 0, sum1 = 0;
        for (int i = 0; i < idx-1; i++) {
            sum1 = 0;
            sum = sum*10+a[i];
            for (int j = i+1; j < idx; j++) {
                sum1=sum1*10+a[j];
            }
            if (ma < sum*sum1) ma = sum*sum1;
        }
    } while (next_permutation(a,a+idx));
    cout << ma;
    return 0;
}

