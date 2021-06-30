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

	//�� ���� ���̰� �ٸ��� ������ 0��.
	if (sl.length() != sr.length())
	{
		cout << "0" << endl;
		return 0;
	}
	else
	{
		
		for (int i = l; i <= r; i++)
		{
			s = to_string(i); //���ڸ� string���� �ٲ�
			cnt = 0;

			for (int j = 0; j < s.length(); j++)
			{
				//�տ������� ���ڸ� ���ؼ� ���ڰ� �޶����� cnt ����ϰ� ����.
				if (sl[j] != sr[j])
				{
					cout << cnt << endl;
					return 0;
				}

				//���ڰ� 8�� ��� cnt���� 1 �ø�.
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