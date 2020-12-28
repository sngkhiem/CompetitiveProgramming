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

int main() {
	fastIO;
	#ifndef ONLINE_JUDGE
		freopen("inp.txt", "r", stdin); freopen("out.txt", "w", stdout);
	#endif
	// ******************************************
	int t;
	cin >> t;
	while (t--) {
		int n, a[55], t = 1;
		bool check = true;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			check = (check && a[i] == i);
		}
		if (check) 
			cout << 0 << endl;
		else if (a[n] == 1 && a[1] == n) 
			cout << 3 << endl;
		else if (a[1] == 1 || a[n] == n) 
			cout << 1 << endl;
		else cout << 2 << endl;
	}
	return 0;
}