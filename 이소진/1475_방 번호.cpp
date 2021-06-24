#include <iostream>
#include <string>
using namespace std;

int main()
{
	int arr[9] = {}; //번호 나온 횟수 저장(6이랑 9는 횟수 같이 셈) 0 1 2 3 4 5 (6, 9) 7 8
	string n;
	int set = 0;
	cin >> n;

	for (int i = 0; i < n.length(); i++)
	{
		if (n[i] - '0' == 9)
			arr[6]++;
		else
			arr[n[i] - '0']++;
	}

	for (int i = 0; i < 9; i++)
	{
		if (i == 6) //6, 9가 나온 횟수를 검사
		{
			if (arr[i] % 2 == 0) //6, 9가 나온 횟수가 짝수일 때
			{
				if (set < arr[i] / 2)
					set = arr[i] / 2; //횟수 / 2 값을 set에 저장
			}
			else //6, 9가 나온 횟수가 홀수일 때
			{
				if (set < arr[i] / 2 + 1)
					set = arr[i] / 2 + 1; // 횟수 / 2 + 1 값을 set에 저장
			}
		}
		else //6, 9가 아닌 다른 수가 나온 횟수를 검사
		{
			if (set < arr[i])
				set = arr[i];
		}
	}

	cout << set << endl;

	return 0;
}