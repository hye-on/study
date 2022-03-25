#include <iostream>
#include <string>
using namespace std;

int M;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> M;

	string op;
	int num, BIT = 0;

	while (M--) {
		cin >> op;

		if(op == "add") {
			cin >> num;
			BIT |= (1 << num);
		}
		else if (op == "remove") {
			cin >> num;
			BIT &= ~(1 << num);
		}
		else if (op == "check") {
			cin >> num;
			if (BIT & (1 << num))
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (op == "toggle") {
			cin >> num;
			BIT ^= (1 << num);
		}
		else if (op == "all") {
			BIT = (1 << 21) - 1;
		}
		else if (op == "empty") {
			BIT = 0;
		}
	}

	return 0;
}
