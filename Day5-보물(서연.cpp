#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//���� 1026��: ����
//����: �� �迭�� �� ���Ҹ� ���� �ּ� ����

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