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
//typedef short s;
typedef unsigned short us;

int main() {
	fastIO;
	#ifndef ONLINE_JUDGE
		freopen("inp.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif
	i n, res = 0;;
	string tmp;
	cin >> n;
	for (i, 1, n) {
		cin >> tmp;
		if (tmp == "Tetrahedron") {
			res += 4;
		}
		if (tmp == "Cube") {
			res += 6;
		}
		if (tmp == "Octahedron") {
			res += 8;
		}
		if (tmp == "Dodecahedron") {
			res += 12;
		}
		if (tmp == "Icosahedron") {
			res += 20;
		}
	}
	cout << res;
	return 0;
}
