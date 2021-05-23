#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	char chess[8][8];

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cin >> chess[i][j];
		}
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (i % 2 == 0 && j % 2 == 0)//i¿Í j°¡ ¸ðµÎ Â¦¼ö¸é ÇÏ¾á Ä­
			{
				if (chess[i][j] == 'F')
					count += 1;
			}
			else if (i % 2 == 1 && j % 2 == 1)//i¿Í j°¡ ¸ðµÎ È¦¼ö¸é ÇÏ¾áÄ­
			{
				if (chess[i][j] == 'F')
					count += 1;
			}
		}
	}

	cout << count << endl;

	return 0;
}