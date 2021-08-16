#include <bits/stdc++.h>

using namespace std;

signed main() {
	int t;
	cin >> t;
	while (t--) {
		int b,p,f,h,c,ans = 0;
		cin >> b >> p >> f; cin >> h >> c;
		b /= 2;
		if (b >= p+f) ans = (p*h)+(f*c);
		else if (h == c) {
			if (p>f && b-p>=0) {
				ans = p*h;
				if (b-p<f) ans += (b-p)*c;
				else ans += f*c;
			}
			else if (p>f && b-p<0) ans = b*h;
			else if (p<f && b-f>=0) {
				ans = f*c;
				if (b-f<p) ans += (b-f)*h;
				else ans += p*h;
			}	
			else ans = b*c;
		}
		else {
			if (h>c && b-p>=0) {
				ans = p*h;
				if (b-p<f) ans += (b-p)*c;
				else ans += f*c;
			}
			else if (h>c && b-p<0) ans = b*h;
			else if (c>h && b-f>=0) {
				ans = f*c;
				if (b-f<p) ans += (b-f)*h;
				else ans += p*h;
			}
			else if (c>h && b-f<0) ans = b*c;
		}
		cout << ans << endl;
	}
	return 0;
}