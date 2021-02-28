/*
	Author: sngkhiem
*/
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <cmath>

using namespace std;

/*faster in/out*/
#define fastIO ios::sync_with_stdio(false); cin.tie(0);

/*Some Pragma*/
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

/*push-pos define*/
#define pb push_back
#define pob pop_back
#define fi first
#define se second

/*for define*/
#define For(i,a,b) for(int i=a; i<=b; i++)
#define Bor(i,a,b) for(int i=a; i>=n; i--)

/*type define*/
typedef unsigned long long ull;
typedef long long ll;

/*constant*/
const int MOD = 1e9 + 7;
const ll INF = INT_MAX;


int main() {
	fastIO;
	#ifndef ONLINE_JUDGE
		freopen("inp.txt", "r", stdin); freopen("out.txt", "w", stdout);
	#endif
	// ******************************************
	int t, a[10000], n;
	long long b[10000];
	cin >> t;
	for (int i = 1; i <= t; i++) {
		long long res = 0, cnt = 0, c = 0;
		cin >> n;
		fill(b + 1, b + n + 1, 0);
		for (int j = 1; j <= n; j++) cin >> a[j];
		for (int j = 1; j <= n; j++) {
			c += b[j]; cnt += c;
			if (cnt >= a[j]-1) {
				cnt -= a[j] - 1; b[j + 2]++; b[min(a[j] + j + 1, n + 1)]--;
			}
			else {
				res += (a[j] - 1 - cnt); cnt = 0;
				b[j + 2]++; b[min(a[j] + j + 1, n + 1)]--;

			}
		}
		cout << res << endl;
	}
	return 0;
}
