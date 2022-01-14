#include<iostream>

using namespace std;

bool num[123456*2+1];
int main()
{
		int n;
		cin >> n;
		for (int i = 2; i <= 123456 * 2; i++)
		{
			int j = i;
			if (num[i])
			{
				continue;
			}
			while (j+i < 123456 * 2)
			{
				num[j+i] = true;
				j += i;
			}
		}
		

		while (n)
		{
			int count = 0;
			for (int i = n+1; i <= 2 * n; i++)//
			{
				if (!num[i])
					count++;
			}
			cout << count << endl;

			cin >> n;
		}
	
}