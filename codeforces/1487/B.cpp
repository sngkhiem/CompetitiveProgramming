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
const ll INF = 1e18;


int main() {
	fastIO;
#ifndef ONLINE_JUDGE
	freopen("inp.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	// ******************************************
	int tc;
	long n, k;
	cin >> tc;
	for (int i = 1; i <= tc; i++) {
		cin >> n >> k;
		if (k == 1) cout << 1 << endl;
		else if (k % n == 0 && n % 2 == 0) cout << n << endl;
		else if (n % 2 == 0) cout << k % n << endl;
		else {
			k += (k - 1) / (n / 2);
			if (k % n == 0) cout << n << endl;
			else cout << k % n << endl;
		}
	}
}
