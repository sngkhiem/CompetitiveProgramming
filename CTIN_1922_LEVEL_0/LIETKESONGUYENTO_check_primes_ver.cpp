#include <bits/stdc++.h>

using namespace std;

bool checkPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

signed main() {
    int a,b; cin >> a >> b;
    for (int i = a; i <= b; i++)
        if (checkPrime(i)) cout << i << "\n";
    return 0;
}
