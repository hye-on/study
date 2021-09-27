#include <iostream>
#include <algorithm>
using namespace std;

long long twoNum(long long n) {
	long long two = 0;
	for (long long i = 2; i <= n; i *= 2)
		two += n / i;
	return two;
}

long long fiveNum(long long n) {
	long long five = 0;
	for (long long i = 5; i <= n; i *= 5)
		five += n / i;	
	return five;
}

int main() {
	long long n, m;
	cin >> n >> m;
	cout << min(twoNum(n) - (twoNum(m) + twoNum(n - m)), fiveNum(n) - (fiveNum(m) + fiveNum(n - m)));
}
