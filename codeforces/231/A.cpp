#include <iostream>

using namespace std;

int main() {
	int n, arr[1001][4], tmp = 0, res = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		tmp = 0;
		for (int j = 1; j <= 3; j++) {
			cin >> arr[i][j];
			tmp += arr[i][j];
		}
		if (tmp >= 2) {
			res++;
		}
	}
	cout << res;
	return 0;
}