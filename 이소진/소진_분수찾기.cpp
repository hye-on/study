#include <iostream>
using namespace std;

int main()
{
	int x, num = 1; //num�� ���� �����ϴ� ����
	cin >> x;

	//�� ���ϱ�
	while (x > num)
	{
		x -= num;
		num += 1;
	}

	//���
	if (num % 2 == 0)
	{
		cout << x << "/" << num + 1 - x << endl;
	}
	else
	{
		cout << num + 1 - x << "/" << x << endl;
	}
	

	return 0;
}