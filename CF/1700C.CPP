/*
    Author: Tran Hoang Khiem
    School: Nguyen Thi Minh Khai High School
*/
#include <bits/stdc++.h>

using namespace std;

#define all(a) a.begin(),a.end()
#define ll long long

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n; int a[n+1];
        for(int i = 0; i < n; i++) cin >> a[i];
        ll cur=a[0], ans=0, d=0;
        for(int i = 1; i < n; i++){
            if(cur < a[i]-d) ans = ans+(a[i]-d)-cur, d=d+(a[i]-d)-cur;
            else ans=ans+cur-(a[i]-d), cur=a[i]-d;
        }
        ans+=abs(cur);
        cout << ans << "\n";
    }
}

