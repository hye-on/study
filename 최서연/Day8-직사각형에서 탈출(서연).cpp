#include <iostream>
#include <math.h>
using namespace std;

//백준 1085: 직사각형에서 탈출
//내용: 오른쪽 위 좌표가 w, h 왼쪽 아래 좌표가 0,0인 직사각형에 찍힌 점 x,y에서 직사각형으로까지의 최단거리 찾기
//사용 함수: min과 abs

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int x_min = x < abs(w - x) ? x : abs(w - x);	//x기준으로 최소값
	int y_min = y < abs(h - y) ? y : abs(h - y);	//y기준으로 최소값

	cout << min(x_min, y_min);

	return 0;
}
