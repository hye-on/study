#include<iostream>
#include<string>

using namespace std;


int main()
{
	int n;
	cin >> n;
	int count = n;
	string str;
	char aa = '1';
	for (int i = 0; i < n; i++)
	{
		bool aToz[26] = { false };
		cin >> str;
		for (int j = 0; j < str.length(); j++)
		{
			if (aToz[str[j] - 'a'])
			{
				count--;
				break;
			}
			else
			{//a a b b c b c
				if (str[j] != str[j + 1])
				{

					aToz[str[j] - 'a'] = true;
				}
			}
		}
	}
	cout << count;
}

