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
#define for(i,a,b) for(int i=a; i<=b; i++)
#define bor(i,a,b) for(int i=a; i>=n; i--)

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
	int a[4];
	cin >> a[0] >> a[1] >> a[2] >> a[3];
	int xmax = max(a[0],max(a[1],max(a[2],a[3])));
	for (i, 0, 3) {
		if (xmax == a[i]) {
			a[i] = 0;
			break;
		}
	}
	for (i, 0, 3) {
		if (a[i] != 0) cout << xmax - a[i] << ' ';
 	}
	return 0;
}
