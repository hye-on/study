#include <iostream>
using namespace std;

//���� 1065: �Ѽ�
//����: n�� �ԷµǾ��� ��, 1���� n������ �� ��, �� �ڸ����� ���������� '�Ѽ�'�� ã�� ����ϱ�(ex. 123 444 765)

int count_han = 0;

//�Ѽ� ã��
void find_han(int n) {
	int buff_arr[3] = { 0 };	//1000�϶��� �Ѽ��� �ƴ����� õ�� �ڸ����� ������
	int device = 10;

	//n�� ���ڸ�, ���ڸ� �� �϶��� ������ �Ѽ��̴�.
	if (n / 100 < 1) {
		count_han = n;
	}
	else {
		for (int i = 100; i <= n; i++) {
			//�迭�� �� �ڸ� ���� ����
			int buff = i;
			for (int j = 0; j < 3; j++) {
				buff_arr[j] = buff % device;
				buff /= device;
			}

			if (buff_arr[2] - buff_arr[1] == buff_arr[1] - buff_arr[0] && i!=1000) {
				count_han += 1;
			}
		}
		//���ڸ�, ���ڸ��� �����ֱ�
		count_han += 99;
	}
}

int main() {
	int n;
	cin >> n;
	find_han(n);
	cout << count_han;

	return 0;
}