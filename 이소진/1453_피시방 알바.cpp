#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, refusal = 0;
	int com[100] = {}; //1������ 100�������� ��ǻ��
	cin >> n;

	//���ϴ� �ڸ� �Է�
	vector<int> seat;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		seat.push_back(x);
		com[x - 1]++; //���õ� �ڸ��� �ش��ϴ� ��ǻ�� +1
	}

	for (int i = 0; i < 100; i++)
	{
		if (com[i] >= 2)
			refusal += com[i] - 1; //2�� �̻� ���õ��� ��� ������ ��� ���� refusal�� ����.
	}

	cout << refusal << endl;

	return 0;
}