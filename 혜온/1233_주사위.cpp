#include<iostream>


using namespace std;

int main()
{
	int s1, s2, s3;
	int max = 0, maxIndex = 0;

	
	cin >> s1 >> s2 >> s3;
	int aa = s1 + s2 + s3;

	int sum[81] = { 0, };
	

	for (int i =1 ; i <= s1; i++)
		for (int j = 1; j <= s2; j++)
			for (int k = 1; k <= s3; k++)
				sum[i  + j  + k ]++;
	//ÀÎµ¦½º´Â ÇÕ ³»¿ëÀº ºóµµ
	for (int i = 1; i <= 80; i++)
	{
		
		if (sum[i] > max)
		{
			
			max = sum[i];
			maxIndex = i;
		}
	}
	cout << maxIndex;

	return 0;
}