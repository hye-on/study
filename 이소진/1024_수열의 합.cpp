#include <iostream>
using namespace std;

int main()
{
	int n, l;
	cin >> n >> l;

	if (l > 100)
	{
		cout << "-1" << endl;
		return 0;
	}
	
	for (int i = l; i <= 100; i++)
	{
		int x = n - (i - 1) * i / 2; //n - (1부터 i - 1까지의 합)
		if (x < 0)
			break;
		if (x % i == 0)
		{
			for (int j = 0; j < i; j++)
			{
				cout << x / i + j << " ";
			}
			return 0;
		}
	}

	cout << "-1" << endl;

	return 0;
}