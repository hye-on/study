#include <iostream>
#include <string>
using namespace std;

int main()
{
	int max = 0, index;
	bool equal = false;
	string s;
	int count[26] = { 0 };
	cin >> s;
	

	//���ĺ� Ƚ���� count�� �����ϱ�
	for (int i = 0; i < s.length(); i++)
	{
		//�빮���� ���
		if ('A' <= s[i] && 'Z' >= s[i])
		{
			count[s[i] - 'A'] += 1;
			continue;
		}
		
		//�ҹ����� ���
		count[s[i] - 'a'] += 1;
	}

	//���� ���� ���� ���ĺ� ���ϱ�
	for (int i = 0; i < 26; i++)
	{
		if (max < count[i])
		{
			max = count[i];
			index = i;
		}
			
	}

	//���� ���� ���� ���ĺ��� ���� ������ Ȯ��
	for (int i = 0; i < 26; i++)
	{
		if ((i != index) && (max == count[i]))
		{
			equal = true;
			break;
		}
	}

	//���
	if (equal)
		cout << "?" << endl;
	else
		cout << (char)('A' + index) << endl;

	return 0;
}