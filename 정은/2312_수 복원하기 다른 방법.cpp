#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int arr[100001];
	int t, n, temp;

	cin >> t;

	while (t--) {
		memset(arr, 0, sizeof(arr));
		cin >> n;
		temp = n;
		for (int i = 2; i <= temp; i++)
			while (temp%i == 0 && temp != 1) {
				temp /= i;
				arr[i]++;
			}
		for (int i = 2; i <= n; i++)
			if (arr[i])
				cout << i << ' ' << arr[i] << '\n';
	}
}
