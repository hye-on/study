#include <iostream>
#include <algorithm>
using namespace std;

//���� 1037: ���
//����: ��¥ ��� n�� �Է¹ް� ���� ���� ����ϱ�
//���˰���: algorithm ����� sort

long arr[50] = { 0 };

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);
	cout << arr[0] * arr[n - 1];

	return 0;
}