#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t; //�׽�Ʈ ���̽��� ������ ������ �迭
	int zero[41], one[41]; //0�� 1�� ������ ������ �迭

	cin >> t;

	zero[0] = 1;
	zero[1] = 0;
	one[0] = 0;
	one[1] = 1;

	vector<int> n(t);//�׽�Ʈ ���̽� �Է¹��� ����

	//�׽�Ʈ ���̽� �Է�
	for (int i = 0; i < t; i++)
	{
		cin >> n[i];
	}

	//�迭�� 0�� 1�� ���� ����
	for (int i = 0; i < 41; i++)
	{
		if (i >= 2)
		{
			zero[i] = zero[i - 1] + zero[i - 2];
			one[i] = one[i - 1] + one[i - 2];
		}
	}

	//�׽�Ʈ ���̽��� 0�� 1�� ���� ���
	for (int i = 0; i < t; i++)
	{
		cout << zero[n[i]] << " " << one[n[i]] << endl;
	}
	

	return 0;
}