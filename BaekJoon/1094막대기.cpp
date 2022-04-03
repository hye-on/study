#include<iostream>

using namespace std;

//지민이가 가지고 있는 막대의 길이를 모두 더한다.처음에는 64cm 막대 하나만 가지고 있다.이때, 합이 X보다 크다면, 아래와 같은 과정을 반복한다.
//가지고 있는 막대 중 길이가 가장 짧은 것을 절반으로 자른다.
//만약, 위에서 자른 막대의 절반 중 하나를 버리고 남아있는 막대의 길이의 합이 X보다 크거나 같다면, 위에서 자른 막대의 절반 중 하나를 버린다.
//이제, 남아있는 모든 막대를 풀로 붙여서 Xcm를 만든다.

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int x;
	cin >> x;
	int stick = 64;
	int half = 64;
	while (true)
	{
		if (stick != x)
		{
			half = half >> 1;
			//만약, 위에서 자른 막대의 절반 중 하나를 버리고 
			//남아있는 막대의 길이의 합이 X보다 크거나 같다면
			if (stick-half >= x)
			{
				stick -= half; //이제, 남아있는 모든 막대를 풀로 붙여서 Xcm를 만든다
			}
			
		}
		else
		{
			break;
		}
		
		
	}
	int count = 0;
	for (int i = 0; i < 7; i++)
	{
		if (stick&(1 << i))
			count++;
	}
	cout << count;
	
	
}