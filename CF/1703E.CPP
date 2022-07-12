/*
    Author: Tran Hoang Khiem
    School: Nguyen Thi Minh Khai High School
*/

#include <bits/stdc++.h>

using namespace std;

#define all(a) a.begin(),a.end()
#define ll long long

signed main(){
    int t; cin >> t;
    while(t--){
        string s;
        ll ans=0;
        int n; cin >> n;
        int g[n][n];
        for(int i=0;i<n;i++){
            cin >> s;
            for(int j=0;j<n;j++){
                g[i][j]=s[j]-'0';
            }
        }

        for(int i = 0; i < n/2; i++){
            for(int j = 0 ;j < n/2; j++){
                int cur=g[i][j]+g[j][n-i-1]+g[n-j-1][i]+g[n-i-1][n-j-1];
                ans+=min(cur,4-cur);
            }
        }

        if (n%2 == 1) {
            for(int i = 0; i < n/2; i++){
                int cur=g[i][n/2]+g[n-i-1][n/2]+g[n/2][i]+g[n/2][n-i-1];
                ans+=min(cur,4-cur);
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
