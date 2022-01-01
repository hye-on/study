#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int red, green;
	cin >> red >> green;

	int mx = max(red, green);
	int mn = min(red, green);

	int temp;
	while (mn) {
		temp = mx % mn;
		mx = mn;
		mn = temp;
	}

	for (int i = 1; i*i <= mx; i++) {
		if (i*i == mx)
			cout << i << " " << red / i << " " << green / i << "\n";
		else if (mx%i == 0) {
			cout << i << " " << red / i << " " << green / i << "\n";
			temp = mx / i;
			cout << temp << " " << red / temp << " " << green / temp << "\n";
		}
		
	}
}
