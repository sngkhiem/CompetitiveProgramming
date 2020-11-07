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
#include <string.h>

using namespace std;

#define pb push_back;
#define fastIO ios::sync_with_stdio(false); cin.tie(0);

using ll = long long;
using ull = unsigned long long;
using uint = unsigned int;


int main() {
	fastIO;
	#ifndef ONLINE_JUDGE
		freopen("236A.INP", "r", stdin);
		freopen("236A.OUT", "w", stdout);
	#endif
	int tmp1, a[10000], res = 0;
	char tmp;
	memset(a,0,sizeof(a));
	while (cin >> tmp) {
		tmp1 = tmp;
		a[tmp1]++;
	}
	for (int i = 97; i <= 122; i++) {
		if (a[i] != 0) {
			res++;
		}
	}
	if (res % 2 == 0) {
		cout << "CHAT WITH HER!";
	}
	else cout << "IGNORE HIM!";
	return 0;
}