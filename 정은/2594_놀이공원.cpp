#include <iostream>
#include <algorithm>
using namespace std;

struct Ride {
	int start, end;
};

int toTime(int k) {
	int h = k / 100;
	int m = k % 100;
	return h * 60 + m;
}

bool comp(Ride r1, Ride r2) {
	if (r1.end == r2.end)
		return r1.end < r2.end; //<:뒤로 갈수록 큰 값으로 정렬, >:뒤로 갈수록 작은 값으로 정렬
	else
		return r1.end < r2.end;
}

int main() {
	int n;
	int open = 1000, close = 2200, rest;
	Ride ride[51];
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		ride[i].start = toTime(k) - 10;
		cin >> k;
		ride[i].end = toTime(k) + 10;
	}

	sort(ride, ride + n, comp);

	rest = max(ride[0].start - toTime(open), toTime(close) - ride[n-1].end);

	for (int i = 1; i < n; i++)
		rest = max(rest, ride[i].start - ride[i-1].end);

	if (rest <= 0) cout << 0 << '\n';
	else cout << rest << '\n';

	return 0;
}
