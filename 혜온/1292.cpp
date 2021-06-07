#include<iostream>
using namespace std;


int main() {
	int a, b;
	int arr[1000];
	int sum = 0;

	cin >> a >> b;
	int k = 1;

	for (int i = 0; i < b;) {
		for (int j = 0; j < k && i < b; ++j) {
			arr[i] = k;

			if (i >= (a - 1)) {
				sum += arr[i];
			}
			++i;
		}
		++k;
	}

	cout << sum;

	return 0;
}
