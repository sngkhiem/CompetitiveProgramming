/*
					*
	            *  * *
	*  *  *  *  *  ***  *        *
	* *   *  *  *  *    **      **  
	**    ****  *  ***  * *    * *
	* *   *  *  *  *    *  *  *  *
	*  *  *  *  *  ***  *    *   *
*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

using namespace std;

#define pb push_back;
#define fastIO ios::sync_with_stdio(false); cin.tie(0);

using ll = long long;
using ull = unsigned long long;
using uint = unsigned int;


int main() {
	fastIO;
	#ifndef ONLINE_JUDGE
		freopen("116A.INP", "r", stdin);
		freopen("116A.OUT", "w", stdout);
	#endif
	int n, a[1001], b[1001], cur = 0, cur1 = 0, max = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
	}
	cur = b[1];
	max = b[1];
	for (int i = 2; i <= n; i++) {
		cur = cur - a[i] + b[i];
		if (max < cur) {
			max = cur;
		}
	}
	cout << max;
	return 0;
}