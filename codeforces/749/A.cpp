#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << n / 2 << endl;
        while (n != 0) {
            cout << 2 << " ";
            n -= 2;
        }
    }
    else {
        cout << (n-3)/2+1 << endl;
        cout << 3 << " ";
        n -= 3;
        while (n != 0) {
            
            cout << 2 << " ";
        
            n -= 2;
        }
        
    }
    return 0;
}