#include <iostream>
using namespace std;

int main()
{
	int n, n2, left, right, hap, new_n, count = 0;
	cin >> n;
	n2 = n;

	while (true)
	{
		left = n2 / 10; //���� �ڸ���
		right = n2 % 10; //������ �ڸ���
		hap = left + right; //���� �ڸ��� + ������ �ڸ���
		new_n = right * 10 + hap % 10; //�־��� ���� ���� ������ �ڸ� ���� ���� ���� ������ �ڸ����� �̾� ���� ���ο� ��
		count += 1;

		if (n != new_n) //������ ���� ���� ������ ����Ŭ�� �ѹ� �� ��.
			n2 = new_n;
		else
			break;
	}

	cout << count << endl;

	return 0;
}