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
		freopen("136A.INP", "r", stdin);
		freopen("136A.OUT", "w", stdout);
	#endif
	int n, a[105], b[105];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[i] = i;
	}
	for (int i = 1; i < n; i++) {
		for (int j = i + 1; j <= n; j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
				swap(b[i], b[j]);
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << b[i] << " ";
	}
	return 0;
}