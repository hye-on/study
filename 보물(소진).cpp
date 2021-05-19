#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	//���� ����
	int n, s = 0;

	//�Է� ����
	cin >> n;

	//����a, ����b �����, �� �Է�
	vector<int> a(n);
	vector<int> b(n);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}

	//�迭�� ������ ������������ ����
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	//s�� �� ����
	for (int i = 0; i < n; i++)
	{
		s += (a[i] * b[n - i - 1]);
	}

	cout << s << endl;

	return 0;
}