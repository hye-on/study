#include<iostream>

using namespace std;
int num[12];
// ó���� ���� ���� ��� Ǯ������� ����ϴٰ� �˰��� �з��� �ôµ� dp.. ������ ���ߴ�.

int main()
{
	int T;
	cin >> T;
	num[1] = 1;
	num[2] = 2;
	num[3] = 4;
	for (int i = 4; i < 11; i++)
	{
		for (int j = 1; j <=3 ; j++)
		{
			
			num[i] += num[i - j];
		}
		
	}
	while (T--) {
		int n;
		cin >> n;
		cout << num[n] << endl;
	}
	
}