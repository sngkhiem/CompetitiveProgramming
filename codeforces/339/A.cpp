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
#include <algorithm>

using namespace std;

#define pb push_back;
#define fastIO ios::sync_with_stdio(false); cin.tie(0);

using ll = long long;
using ull = unsigned long long;
using uint = unsigned int;


int main() {
	fastIO;
	#ifndef ONLINE_JUDGE
		freopen("339A.INP", "r", stdin);
		freopen("339A.OUT", "w", stdout);
	#endif
	int i = 1;
	char a[100000], tmp;
	while (cin >> tmp) {
		if (tmp != '+') {
			a[i] = tmp;
			i++;
		}
	}
	i--;
	sort(a + 1, a + 1 + i);
	for (int j = 1; j <= i; j++) {
		cout << a[j];
		if (j <= i - 1) {
			cout << "+";
		}
	}
	return 0;
}