#include <iostream>
#include <string>
using namespace std;

int main()
{
	int arr[9] = {}; //��ȣ ���� Ƚ�� ����(6�̶� 9�� Ƚ�� ���� ��) 0 1 2 3 4 5 (6, 9) 7 8
	string n;
	int set = 0;
	cin >> n;

	for (int i = 0; i < n.length(); i++)
	{
		if (n[i] - '0' == 9)
			arr[6]++;
		else
			arr[n[i] - '0']++;
	}

	for (int i = 0; i < 9; i++)
	{
		if (i == 6) //6, 9�� ���� Ƚ���� �˻�
		{
			if (arr[i] % 2 == 0) //6, 9�� ���� Ƚ���� ¦���� ��
			{
				if (set < arr[i] / 2)
					set = arr[i] / 2; //Ƚ�� / 2 ���� set�� ����
			}
			else //6, 9�� ���� Ƚ���� Ȧ���� ��
			{
				if (set < arr[i] / 2 + 1)
					set = arr[i] / 2 + 1; // Ƚ�� / 2 + 1 ���� set�� ����
			}
		}
		else //6, 9�� �ƴ� �ٸ� ���� ���� Ƚ���� �˻�
		{
			if (set < arr[i])
				set = arr[i];
		}
	}

	cout << set << endl;

	return 0;
}