#include<iostream>
#include<algorithm>

using namespace std;

int n;
int person[1001];
//������ �ð��� ������� �ʾƵ� �Ǿ ������ ����
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> person[i];
	}

	sort(person, person + n);

	int sum = 0,ans=0;
	for (int i = 0; i < n; i++)
	{
		sum =(sum+ person[i]);
		ans += sum;
	}
	cout << ans;
}