#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, m;
		long long a = 1, b = 1;
		cin >> n >> m;

		if (n == m)
			cout << 1 << "\n";
		else {
			if (n > m / 2)
				n = m - n;

			for (int i = 0; i < n; i++) {
				a *= m;
				m--;
			}
			for (n; n > 1; n--)
				b *= n;

			cout << a / b << "\n";
		}
	}
}
