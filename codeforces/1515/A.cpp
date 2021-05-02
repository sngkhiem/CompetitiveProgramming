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

int t, n, x, a[101], b[101];
bool check;

int main() {
	fastIO;
	#ifndef ONLINE_JUDGE
		freopen("inp.txt", "r", stdin); freopen("out.txt", "w", stdout);
	#endif
	// ******************************************
	cin >> t;
	while (t--) {
		int cur = 0, sum=0, j=0; check = true;
		cin >> n >> x;
		for (int i = 1; i <= n; i++) { 
			cin >> a[i];
			sum += a[i];
		}
		if (sum == x) cout << "NO" << endl;
		else {
			cout << "YES" << endl;
			for (int i = 1; i <= n; i++) {
				if (cur + a[i] != x) {
					cout << a[i] << " ";
					cur += a[i];
				}
				else {
					j++;
					b[j] = a[i];
				}

			}
			for (int i = 1; i <= j; i++) cout << b[i] << " ";
			cout << endl;
		}
	}
}
