#include<iostream>

using namespace std;
//https://orb-h.github.io/nojam/nojam/1676/
int main()
{
	int N, R;
	cin >> N >> R;
	
	int countN2=0, countN5=0;
	int countNM2 = 0, countNM5 = 0;
	int countR2 = 0, countR5 = 0;
	//n~(n-r)- r~1  1    
	for (int i = 2; i <= N; i*=2)
	{
		
		countN2 += (N / i);
		countNM2 += ((N - R) / i);
		countR2 += ((R) / i);

	}
	for (int i = 5; i <= N; i *= 5)
	{
		
		countN5 += (N / i);
		countNM5 += ((N - R) / i);//i>N-R����Ŀ����� 0�� ���ϰ� �ǹǷ� �ٸ� ���ǹ� �ʿ� x
		countR5 += ((R) / i);
	}
	int temp2 = countN2 - countNM2 - countR2;
	int temp5= countN5 - countNM5 - countR5;

	//cout << countN2 << "  " << countNM2 << "  " << countR2 << endl;
	//cout << countN5 << "  " << countNM5 << "  " << countR5 << endl;

	if (temp2 > temp5)
		cout << temp5;
	else
		cout << temp2;
}