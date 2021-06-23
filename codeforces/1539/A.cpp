#include <bits/stdc++.h>

using namespace std;

int main() {
    long long k;
    cin >> k;
    while (k--) {
        long long n,x,t;
        cin >> n >> x >> t;
        long long cur;
        cur=min(t/x,n-1);
        cout << (n-cur)*cur+cur*(cur-1)/2 << endl;
    }
    return 0;
}
