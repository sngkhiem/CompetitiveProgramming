#include <iostream>

using namespace std;

int main() {
	int n, res = 0;
	string arr[151];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		if (arr[i][1] == '-') {
			res -= 1;
		}
		else res += 1;
	}
	cout << res;
	return 0;
}