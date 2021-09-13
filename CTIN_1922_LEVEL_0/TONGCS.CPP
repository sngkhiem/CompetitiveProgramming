#include <bits/stdc++.h>

using namespace std;

int sumOfDigits(int n) {
    int m = 0;
    while (n != 0) {
        int tmp = n % 10;
        n /= 10;
        m += tmp;
    }
    return m;
}

signed main() {
    int n; cin >> n; int mem = n;
    int m = sumOfDigits(n);
    while (n % m != 0) {
        n--; m = sumOfDigits(n);
    }
    cout << n;
    return 0;
}
