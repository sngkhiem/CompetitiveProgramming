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
	freopen("112A.INP", "r", stdin);
	freopen("112A.OUT", "w", stdout);
#endif
	int res = 0;
	string a, b;
	cin >> a >> b;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			a[i] += 32;
		}
		if (b[i] >= 'A' && b[i] <= 'Z') {
			b[i] += 32;
		}
	}
	for (int i = 0; i < a.length(); i++) {
		if (a[i] < b[i]) {
			res = -1;
			break;
		}
		else if (a[i] > b[i]) {
			res = 1;
			break;
		}
	}
	cout << res;
	return 0;
}