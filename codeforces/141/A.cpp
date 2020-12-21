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
		i d[201], e[201], flag = 1;
	s a, b, c;
	cin >> a >> b >> c;
	for (i, 0, 200) {
		d[i] = 0;
		e[i] = 0;
	}
	for (i, 0, a.length()-1) {
		int tmp = (int)a[i];
		d[tmp]++;
	}
	for (i, 0, b.length()-1) {
		int tmp1 = (int)b[i];
		d[tmp1]++;
	}
	for (i, 0, c.length()-1) {
		int tmp2 = (int)c[i];
		e[tmp2]++;
	}
	for (i, 0, 200) {
		if (e[i] == d[i]) flag = 1;
		else {
			flag = 0;
			break;
		
		}
	}
	if (flag == 1) {
		cout << "YES";
	}
	else cout << "NO";
	return 0;
}
