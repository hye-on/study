#include<iostream>

using namespace std;
int omog[20][20] = { 0 };
bool check(int y, int x,int i)
{
	int cnt1=0, cnt2=0, cnt3=0, cnt4=0;
	
	//세로로 검사
	for (int i = 1; i <= 4; i++)
	{
		if (y + i < 20 && (omog[y + i][x] == omog[y][x]))
		{
			cnt1++;
			//cout << y << " " << x << "    " << y + i << " " << x << endl;

		}
		else
		{
			break;
		}
	}
	for (int i = 1; i <= 4; i++)
	{
		if (y - i > 0 && (omog[y - i][x] == omog[y][x]))
		{
			cnt1++;
			//cout << y << " " << x << "    " << y - i << " " << x << endl;


		}
		else
		{
			break;
		}
	}
	if (cnt1 == 4)
	{
		
		return true;
	}
	
	//가로로 검사
	for (int i = 1; i <= 4; i++)
	{
		if (x + i <20 && omog[y][x+i] == omog[y][x])
			cnt2++;
		else
			break;
	}
	for (int i = 1; i <= 4; i++)
	{
		if (x - i >0 && omog[y ][x-i] == omog[y][x])
			cnt2++;
		else
			break;
	}
	if (cnt2 == 4)
		return true;
	//   /검사
	for (int i = 1; i <= 4; i++)
	{
		if (y + i <20 &&x-i>0&& omog[y +i][x-i] == omog[y][x])
			cnt3++;
		else
			break;
	}
	for (int i = 1; i <= 4; i++)
	{
		if (y - i > 0 && x+i<20 && omog[y - i][x+i] == omog[y][x])
			cnt3++;
		else
			break;
	}
	if (cnt3 == 4)
		return true;
	
	// \방향 검사
	for (int i = 1; i <= 4; i++)
	{
		if (y - i >0 && x - i>0 && omog[y - i][x - i] == omog[y][x])
			cnt4++;
		else
			break;
	}
	
	for (int i = 1; i <= 4; i++)
	{
		if (y + i < 20 && x + i<20 && omog[y + i][x + i] == omog[y][x])
			cnt4++;
		else
			break;
	}
	if (cnt4 == 4)
		return true;
	
	return false;
}
int main()
{
	int N;
	cin >> N;
	
	//흑은 1 백은 2
	int y, x;
	for (int i = 1; i <= N; i++)
	{
		cin >> y >> x;
		if (i % 2 == 1)
			omog[y][x] = 1;
		else
		{
			//cout << "00001111" << endl;
			omog[y][x] = 2;
		}
		
		if (check(y,x,i))
		{
			cout << i << endl;
			return 0;
			
		}
	
	}
	/*for (int i = 1; i <20; i++)
	{
		for (int j = 1; j <20; j++)
			cout << omog[i][j];
		cout << endl;
	}*/

	cout << -1;
	return 0;
}