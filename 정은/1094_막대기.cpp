#include <iostream>
using namespace std;

int x;
int ans = 0;
int length = 64;

int main() {
	cin >> x;

	while (x > 0) {
		if (length > x)  // ���� 1-1
			length /= 2;
		else {
			ans++;
			x -= length;
		}
	}
	cout << ans;
}
