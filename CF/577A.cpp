#include <bits/stdc++.h>

using namespace std;

int n,x,cnt;

signed main(){
    cin >> n >> x;
    for (int i=1;i<=n;i++){
        if (x%i==0 and x/i<=n) cnt++;
    }
    cout << cnt;
}
