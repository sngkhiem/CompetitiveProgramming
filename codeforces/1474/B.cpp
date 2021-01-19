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
 
bool isPrime(long long n) {
		if (n <= 1) {
			return false;
		}
		else if (n == 2 || n == 3) {
			return true;
		}
		else if (n % 2 == 0 || n % 3 == 0) {
			return false;
		}
		else {
			int i = 5;
			while (i <= sqrt(n)) {
				if (n % i == 0 || n % (i + 2) == 0) {
					return false;
					break;
				}
				i += 6;
			}
		}
		return true;
}
 
int main() {
	fastIO;
	#ifndef ONLINE_JUDGE
		freopen("inp.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif
	// ******************************************
	int t, d;
	bool check;
	cin >> t;
	For(i, 1, t) {
		cin >> d;
		For(j, d + 1, d + 100000) {
			if (!isPrime(j)) continue;
			check = false;
			For(j1, j + d, d + 100000) {
				if (isPrime(j1)) {
					cout << j * j1 << endl;
					check = true;
					break;
				}
			}
			if (check) break;
		}
	}
	return 0;
}