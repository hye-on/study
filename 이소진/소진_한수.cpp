#include <iostream>
using namespace std;

//�Ѽ����� �Ǻ��ϴ� �Լ�
bool hansoo(int n)
{
	int a = n / 100; //100�� �ڸ���
	int b = n % 100 / 10; //10�� �ڸ���
	int c = n % 100 % 10; //1�� �ڸ���

	if (n == 1000)
		return false;
	else if (n >= 100)
	{
		if ((a - b) == (b - c))
			return true;
		else
			return false;
	}
	else
		return true;
	
}

int main()
{
	int n, count = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (hansoo(i))
			count += 1;
	}

	cout << count << endl;

	return 0;
}