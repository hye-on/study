#include<iostream>

using namespace std;
int num[12];
// 처음에 문제 보고 어떻게 풀어야하지 고민하다가 알고리즘 분류를 봤는데 dp.. 생각을 못했다.

int main()
{
	int T;
	cin >> T;
	num[1] = 1;
	num[2] = 2;
	num[3] = 4;
	for (int i = 4; i < 11; i++)
	{
		for (int j = 1; j <=3 ; j++)
		{
			
			num[i] += num[i - j];
		}
		
	}
	while (T--) {
		int n;
		cin >> n;
		cout << num[n] << endl;
	}
	
}