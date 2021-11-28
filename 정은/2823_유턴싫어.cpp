#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Dir {
	int y;
	int x;
};

Dir moveDir[4] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
vector<string> v(10);

int deadEnd(int r, int c) {
	int deadEnd = false;
	int openPath;  //임의의 한 길이 막다른 길인지 확인하기 위한 변수
	int nextY, nextX;

	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++) {
			if (v[i][j] == 'X')
				continue;

			openPath = 0;
			for (int k = 0; k < 4; k++) {
				nextY = i + moveDir[k].y;
				nextX = j + moveDir[k].x;

				if (0 <= nextY && nextY < r && 0 <= nextX && nextX < c)
					if (v[nextY][nextX] == '.')
						openPath++;
			}

			if (openPath <= 1) {  //막다른 길일 경우
				return 1;
			}
		}
	}
	return 0;
}

int main() {
	int r, c;
	cin >> r >> c;

	for (int i = 0; i < r; i++)
		cin >> v[i];

	cout << deadEnd(r, c) << '\n';

	return 0;
}
