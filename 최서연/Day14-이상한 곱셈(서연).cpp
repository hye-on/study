#include <iostream>
#include <string>
using namespace std;

//���� 1225: �̻��� ����
//����: �� �ڸ����� ��� ���� �� ��ȯ�ϱ�

int main() {
	string a, b;
	cin >> a >> b;

	long a_buff = 0, b_buff = 0;
	for (int i = 0; i < a.length(); i++) {
		a_buff += a[i] - '0';
	}
	for (int j = 0; j < b.length(); j++) {
		b_buff += b[j] - '0';
	}

	cout << a_buff * b_buff;

	return 0;
}