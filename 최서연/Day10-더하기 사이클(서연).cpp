#include <iostream>
using namespace std;

//���� 1110: ���ϱ� ����Ŭ
//����: ���ο� ���� ��� ����� ������ ���� �ɶ����� �ɸ��� ����Ŭ�� �� ��ȯ

int main() {
	int num, new_num = 0, cnt = 0;
	cin >> num;

	new_num = 10 * (num % 10) + ((num < 10 ? num : num % 10 + num / 10) % 10);
	cnt++;

	while (new_num != num) {
		new_num = 10 * (new_num % 10) + ((new_num < 10 ? new_num : new_num % 10 + new_num / 10) % 10);
		cnt++;
	}

	cout << cnt;

	return 0;
}