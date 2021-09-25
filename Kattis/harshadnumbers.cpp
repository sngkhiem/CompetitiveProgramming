#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;

    int sumDigit = 0, tmp = n;
    while (tmp != 0) {
        int tmp2 = tmp % 10;
        tmp /= 10;
        sumDigit += tmp2;
    }
    while (n % sumDigit != 0) {
        n++; sumDigit = 0;
        tmp = n;
        while (tmp != 0) {
            int tmp2 = tmp % 10;
            tmp /= 10;
            sumDigit += tmp2;
        }
    }
    cout << n;
    return 0;
}
