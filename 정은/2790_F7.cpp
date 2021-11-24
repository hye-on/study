#include <iostream>
#include <algorithm>
using namespace std;

int racer[300001];

bool cmp(const int &x, const int &y) {
	return x > y;
}

int main() {
	int n;
	int count = 0;
	int score = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> racer[i];

	sort(racer, racer + n, cmp);

	for (int i = 0; i < n; i++) {
		count += (racer[i] + n >= score);
		score = max(score, racer[i] + i + 1);
	}
	cout << count << '\n';

	return 0;
}
