#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	bool selection = false; //선수를 선발할 수 있는지 여부를 저장할 변수
	int alphabet[26] = { 0 }; //성의 첫글자가 같은 선수의 수 저장할 배열
	int n;
	cin >> n;

	vector<string> list(n);
	for (int i = 0; i < n; i++)
		cin >> list[i];

	//선수 입력
	for (int i = 0; i < n; i++)
	{
		alphabet[list[i][0] - 'a'] += 1;
	}

	//성의 첫글자가 같은 선수의 수 저장하기
	for (int i = 0; i < 26; i++)
	{
		if (alphabet[i] >= 5) //첫글자 같은 선수의 수가 5명 이상이면 selection을 true로 바꾸고, 알파벳 출력
		{
			selection = true;
			cout << (char)('a' + i);
		}
	}

	//선수 5명을 선발할 수 없을 경우
	if (selection == false)
		cout << "PREDAJA" << endl;

	return 0;
}