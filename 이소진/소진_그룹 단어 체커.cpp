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
		int arr[26] = { 0 }; //알파벳 갯수 저장할 배열.
		for (int j = 0; j < word[i].length(); j++)
		{
			if (j == 0) //첫 글자
			{
				arr[word[i][j] - 'a']++;
				group = true;
			}
			
			else //두번째 글자부터
			{
				if (word[i][j] == word[i][j - 1]) //앞 글자와 같을 경우
				{
					arr[word[i][j] - 'a']++; //해당 알파벳 갯수 +1
					group = true;
				}
				else if (word[i][j] != word[i][j - 1]) //앞 글자와 다를 경우
				{
					if (arr[word[i][j] - 'a'] > 0) //해당 알파벳이 나온 적 있으면
					{
						group = false; //그룹 단어 false
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
