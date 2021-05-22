#include <iostream>
using namespace std;

int main()
{
	int x, y, w, h;
	int distance[4];
	cin >> x >> y >> w >> h;

	//(x,y)에서 경계선까지의 거리들을 배열에 저장
	distance[0] = x;
	distance[1] = y;
	distance[2] = w - x;
	distance[3] = h - y;

	//배열의 최솟값을 구해서 출력
	int min = 10000;
	for (int i = 0; i < 4; i++)
	{
		if (min >= distance[i])
			min = distance[i];
	}

	cout << min << endl;

	return 0;
}