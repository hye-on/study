#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, num;
	cin >> num;

	vector<int> a(num);
	for (int i = 0; i < num; i++)
	{
		cin >> a[i];
	}

	//��¥ ����� �ִ񰪰� �ּڰ��� ���� N�� ����
	int min = 1000000;
	int max = 2;
	for (int i = 0; i < num; i++)
	{
		if (min >= a[i])
			min = a[i];
		if (max <= a[i])
			max = a[i];
	}

	n = min * max;

	cout << n << endl;

	return 0;
}