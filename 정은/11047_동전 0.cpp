#include <iostream>
using namespace std;

int cnt = 0;
int arr[10];

int main() {
	int N, K;
	cin >> N >> K;

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	for (int i = N-1; i >= 0; i--) {
		while (K >= arr[i]) {
			K -= arr[i];
			cnt++;
		}
		if (K == 0)
			break;
	}
	cout << cnt << "\n";
	return 0;
}
