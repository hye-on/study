#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	bool group = false;
	int n, count = 0;
	cin >> n;
	vector<string> word(n);
	for (int i = 0; i < n; i++)
	{
		cin >> word[i];
	}

	for (int i = 0; i < n; i++)
	{
		int arr[26] = { 0 }; //���ĺ� ���� ������ �迭.
		for (int j = 0; j < word[i].length(); j++)
		{
			if (j == 0) //ù ����
			{
				arr[word[i][j] - 'a']++;
				group = true;
			}
			
			else //�ι�° ���ں���
			{
				if (word[i][j] == word[i][j - 1]) //�� ���ڿ� ���� ���
				{
					arr[word[i][j] - 'a']++; //�ش� ���ĺ� ���� +1
					group = true;
				}
				else if (word[i][j] != word[i][j - 1]) //�� ���ڿ� �ٸ� ���
				{
					if (arr[word[i][j] - 'a'] > 0) //�ش� ���ĺ��� ���� �� ������
					{
						group = false; //�׷� �ܾ� false
						break;
					}
					else
					{
						arr[word[i][j] - 'a']++;
						group = true;
					}
						
				}
			}
			
		}
		if (group)
			count++;
	}
	
	cout << count << endl;

	return 0;
}
