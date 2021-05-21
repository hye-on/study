#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//백준 1026번: 보물
//내용: 두 배열의 각 원소를 곱한 최소 총합

int a[50] = { 0 }, b[50] = { 0 };
int result;

int main() {
	int n = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sort(a, a + i +1);
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		sort(b, b + i + 1, greater<>());
	}
	for (int i = 0; i < n; i++) {
		result += a[i] * b[i];
	}
	cout << result;
}
