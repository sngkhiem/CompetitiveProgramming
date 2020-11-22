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
		freopen("467A.INP", "r", stdin);
		freopen("467A.OUT", "w", stdout);
	#endif
	int n, p, q, res = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> p >> q;
		if (q - p >= 2) {
			res++;
		}
	}
	cout << res;
	return 0;
}