#include <iostream>

using namespace std;

int main() {
	int n, k, arr[51], res = 0;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i <= n; i++) {
		if (arr[i] >= arr[k] && arr[i] > 0) {
			res++;
		}
	}
	cout << res;
	return 0;
}