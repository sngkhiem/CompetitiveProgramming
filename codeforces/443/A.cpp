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

using namespace std;\

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
	char cur;
	i a[1001], cur1, res = 0;
	for (i, 0, 1001) {
		a[i] = 0;
	}
	while (cin >> cur) {
		if (cur != '{' && cur != '}' && cur != ' ' && cur != ',') {
			cur1 = (int)cur;
			a[cur1]++;
		}
	}
	for (i, 1, 1001) {
		if (a[i] != 0) {
			res++;
		}
	}
	cout << res;
	return 0;
}
