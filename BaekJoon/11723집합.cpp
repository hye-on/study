#include<iostream>
#include<string>
using namespace std;

bool bit[21];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int M;
	cin >> M;
	int count = 0;


	/*add x : S�� x�� �߰��Ѵ�. (1 �� x �� 20) S�� x�� �̹� �ִ� ��쿡�� ������ �����Ѵ�.
		remove x : S���� x�� �����Ѵ�. (1 �� x �� 20) S�� x�� ���� ��쿡�� ������ �����Ѵ�.
		check x : S�� x�� ������ 1��, ������ 0�� ����Ѵ�. (1 �� x �� 20)
		toggle x : S�� x�� ������ x�� �����ϰ�, ������ x�� �߰��Ѵ�. (1 �� x �� 20)
		all : S��{ 1, 2, ..., 20 } ���� �ٲ۴�.
		empty : S�� ���������� �ٲ۴�.*/

	string s="";
	int x = 0;
	while (M--) {
		cin >> s;
		if (s != "all" && s != "empty")
			cin >> x;
		if (s == "add")
		{
			bit[x] = true;
		}
		else if (s == "remove")
		{
			bit[x] = false;
		}
		else if (s == "check")
		{
			count++;
			cout << bit[x] << "\n";
		}
		else if (s == "toggle")
		{
			if (bit[x])
				bit[x] = false;// S�� x�� ������ �����ϰ�
			else
				bit[x] = true;//������ �߰�
		}
		else if (s == "all")
		{
			for (int i = 1; i <= 20; i++)
				bit[i] = true;
		}
		else
		{
			for (int i = 1; i <= 20; i++)
				bit[i] = false;
		}
		/*cout << endl;
		cout << M << endl;*/
	}
}