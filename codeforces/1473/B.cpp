/*
	Author: sngkhiem
*/
#define _CRT_SECURE_NO_WARNINGS

#include <bits/stdc++.h>

using namespace std;

/*faster in/out*/
#define fastIO ios::sync_with_stdio(false); cin.tie(0);

/*push-pos define*/
#define pb push_back
#define pob pop_back
#define fi first
#define se second

/*type define*/
typedef unsigned long long ull;
typedef long long ll;

/*constant*/
const int MOD = 1e9 + 7;
const ll INF = 1e18;


int LCM(int a, int b) {
    return a * b / __gcd(a, b);
}

int main() {
    int t;
    string a, b, res, res1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        res = ""; res1 = "";
        cin >> a;
        cin >> b;
        int n = LCM(a.length(), b.length());
        for (int j = 1; j <= LCM(a.length(), b.length()) / a.length(); j++) res += a;
        for (int j = 1; j <= LCM(a.length(), b.length()) / b.length(); j++) res1 += b;
        if (res == res1) cout << res << endl;
        else cout << "-1" << endl;
    }
    return 0;
}
