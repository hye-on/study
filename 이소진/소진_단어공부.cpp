#include <iostream>
#include <string>
using namespace std;

int main()
{
	int max = 0, index;
	bool equal = false;
	string s;
	int count[26] = { 0 };
	cin >> s;
	

	//알파벳 횟수를 count에 저장하기
	for (int i = 0; i < s.length(); i++)
	{
		//대문자일 경우
		if ('A' <= s[i] && 'Z' >= s[i])
		{
			count[s[i] - 'A'] += 1;
			continue;
		}
		
		//소문자일 경우
		count[s[i] - 'a'] += 1;
	}

	//가장 많이 나온 알파벳 구하기
	for (int i = 0; i < 26; i++)
	{
		if (max < count[i])
		{
			max = count[i];
			index = i;
		}
			
	}

	//가장 많이 사용된 알파벳이 여러 개인지 확인
	for (int i = 0; i < 26; i++)
	{
		if ((i != index) && (max == count[i]))
		{
			equal = true;
			break;
		}
	}

	//출력
	if (equal)
		cout << "?" << endl;
	else
		cout << (char)('A' + index) << endl;

	return 0;
}