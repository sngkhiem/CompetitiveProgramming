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
using uint = unsigned int;


int main() {
	fastIO;
	#ifndef ONLINE_JUDGE
		freopen("486A.INP", "r", stdin);
		freopen("486A.OUT", "w", stdout);
	#endif
	long long n;
	cin >> n;
	if (n % 2 == 0) {
		cout << n / 2;
	}
	else cout << -n + n / 2;
	return 0;
}