#include <iostream>
using namespace std;

int main()
{
	int s1, s2, s3, hap;
	int num[100] = { 0 }; //빈도수 저장할 배열

	cin >> s1 >> s2 >> s3;

	//주사위 합을 구해 배열에 저장
	for (int i = 1; i <= s1; i++)
	{
		for (int j = 1; j <= s2; j++)
		{
			for (int k = 1; k <= s3; k++)
			{
				hap = i + j + k;
				num[hap] += 1;
			}
		}
	}

	//빈도수가 가장 높은 합 구하기
	int many, max = 0;
	for (int i = 0; i < 100; i++)
	{
		if (max < num[i])
		{
			max = num[i];
			many = i;
		}
			
	}

	cout << many << endl;

	return 0;
}