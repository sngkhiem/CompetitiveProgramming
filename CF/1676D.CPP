#include <bits/stdc++.h>

using namespace std;

#define ll long long

signed main(){
    int t; cin >> t;
    while (t--){
        int n,m; cin >> n >> m;
        int a[n+1][m+1];
        for (int i=1; i<=n; i++) for (int j=1;j<=m;j++) cin >> a[i][j];
        int ans = 0;
        for (int i=1; i<=n; i++){
            for (int j=1; j<=m; j++){
                int sum = 0;
                for (int p=1; p<=n; p++){
                    for (int q=1; q<=m; q++){
                        if (p-q == i+-j) sum += a[p][q];
                        else if (p+q == i+j) sum += a[p][q];
                    }
                }
                ans = max(ans, sum);
            }
        }
        cout << ans << "\n";
    }
}
