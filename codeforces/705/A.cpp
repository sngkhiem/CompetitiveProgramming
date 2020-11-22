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
		freopen(".INP", "r", stdin);
		freopen(".OUT", "w", stdout);
	#endif
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1 && i != n) {
			cout << "I hate that ";
		}
		else if (i % 2 == 0 && i != n) {
			cout << "I love that ";
		}
		else if (i % 2 == 1 && i == n) {
			cout << "I hate it ";
		}
		else cout << "I love it ";
	}
	return 0;
}