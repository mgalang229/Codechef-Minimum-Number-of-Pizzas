#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		// view the image in this repository for the derivation of formula
		cout << n / gcd(n, k) << '\n';
	}
	return 0;
}
