#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	bool selection = false; //������ ������ �� �ִ��� ���θ� ������ ����
	int alphabet[26] = { 0 }; //���� ù���ڰ� ���� ������ �� ������ �迭
	int n;
	cin >> n;

	vector<string> list(n);
	for (int i = 0; i < n; i++)
		cin >> list[i];

	//���� �Է�
	for (int i = 0; i < n; i++)
	{
		alphabet[list[i][0] - 'a'] += 1;
	}

	//���� ù���ڰ� ���� ������ �� �����ϱ�
	for (int i = 0; i < 26; i++)
	{
		if (alphabet[i] >= 5) //ù���� ���� ������ ���� 5�� �̻��̸� selection�� true�� �ٲٰ�, ���ĺ� ���
		{
			selection = true;
			cout << (char)('a' + i);
		}
	}

	//���� 5���� ������ �� ���� ���
	if (selection == false)
		cout << "PREDAJA" << endl;

	return 0;
}