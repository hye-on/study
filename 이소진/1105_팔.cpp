#include <iostream>
#include <string>
using namespace std;

int main()
{
	long l, r;
	int result = 100000000, cnt;
	string sl, sr, s;
	cin >> l >> r;

	sl = to_string(l);
	sr = to_string(r);

	//두 수의 길이가 다르면 무조건 0임.
	if (sl.length() != sr.length())
	{
		cout << "0" << endl;
		return 0;
	}
	else
	{
		
		for (int i = l; i <= r; i++)
		{
			s = to_string(i); //숫자를 string으로 바꿈
			cnt = 0;

			for (int j = 0; j < s.length(); j++)
			{
				//앞에서부터 숫자를 비교해서 숫자가 달라지면 cnt 출력하고 끝냄.
				if (sl[j] != sr[j])
				{
					cout << cnt << endl;
					return 0;
				}

				//숫자가 8일 경우 cnt값을 1 올림.
				if (s[j] == '8')
					cnt++;
			}
			if (result > cnt)
				result = cnt;
		}
	}
	
	cout << result << endl;

	return 0;
}