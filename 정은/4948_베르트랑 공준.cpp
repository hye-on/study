#include <iostream>
#include <vector>
using namespace std;

int arr[300000];
vector<int> v;

void sosu(int n) {
	arr[0] = arr[1] = -1;

	for (int i = 2; i <= n; i++)
		arr[i] = i;

	for (int i = 2; i*i <= n; i++) {
		if (arr[i] == i) {
			for (int j = i + i; j <= n; j += i)
				arr[j] = i;
		}
	}

	for (int i = 2; i <= n; i++)
		if (arr[i] == i)
			v.push_back(i);
}

int main() {
	int n;
	int count;

	while (true) {
		count = 0;
		cin >> n;
		if (n == 0)
			break;

		sosu(2 * n);

		for (int i = 0; i < v.size(); i++) {
			if (v[i] <= n)
				count++;
			else
				break;
		}

		cout << v.size() - count << "\n";
		v.clear();
	}
}
