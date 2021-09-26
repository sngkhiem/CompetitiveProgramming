#include <bits/stdc++.h>

#define int long long

using namespace std;

int n,a[100005];

signed main() {
    int sum = 0;
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> a[i];
        sum+=a[i];
    }
    int x;
    cin >> x;

    int i=0,cnt=0,tmp=x/sum;
    sum=sum*(x/sum);
    while (sum<=x) {
        i++; cnt++;
        sum+=a[i];
        if (i==n) i=0;
    }
    cout << tmp*n+cnt;
    return 0;
}
