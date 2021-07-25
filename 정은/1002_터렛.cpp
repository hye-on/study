#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	int x1, y1, r1, x2, y2, r2;
	double length, subtract;
	cin >> t;
	while (t--) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		length = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
		subtract = r1 > r2 ? r1 - r2 : r2 - r1;

		if (length == 0 && r1 == r2)
			cout << -1 << '\n';
		else if (length < r1 + r2 && subtract < length)
			cout << 2 << '\n';
		else if (length == r1 + r2 || length == subtract)
			cout << 1 << '\n';
		else
			cout << 0 << '\n';
	}
}
