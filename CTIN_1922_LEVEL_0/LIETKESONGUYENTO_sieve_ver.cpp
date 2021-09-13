#include <bits/stdc++.h>

using namespace std;

const int N = 1e4+5;

bool prime[N];

signed main() {
    fill(prime,prime+N,true);
    prime[0] = prime[1] = false;
    for (int i = 2; i*i <= N; i++)
        if (prime[i] == true) {
            for (int j = i * i; j <= N; j += i) prime[j] = false;
        }

    int a,b; cin >> a >> b;
    for (int i = a; i <= b; i++)
        if (prime[i]) cout << i << "\n";
}
