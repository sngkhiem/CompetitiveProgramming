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

using namespace std; \

/*fast io*/
#define fastIO ios::sync_with_stdio(false); cin.tie(0);

/*push-pos define*/
#define pb push_back
#define pob pop_back
#define fi first
#define se second

/*for define*/
#define for(i,a,b) for(int i=a; i<=b; i++)
#define bor(i,a,b) for(int i=a; i>=n; i--)

/*typedef*/
typedef unsigned long long ull;
typedef long long ll;
typedef long l;
typedef unsigned long ul;
typedef long double ld;
typedef int i;
typedef unsigned int ui;
typedef string s;
typedef char c;
typedef bool b;
typedef float f;
typedef unsigned short us;

int main() {
	fastIO;
#ifndef ONLINE_JUDGE
	freopen("inp.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	i t, n, flag = 1, a[51];
	cin >> t;
	for (i, 1, t) {
		flag = 1;
		cin >> n;
		for (j, 1, n) {
			a[j] = 0;
		}
		for (j, 1, n) {
			cin >> a[j];
		}
		sort(a + 1, a + n + 1);
		for (j, 2, n) {
			if (a[j] - a[j - 1] > 1) {
				flag = 0; break;
			}
		}
		if (flag == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}
