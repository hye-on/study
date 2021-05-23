#include <iostream>
#include <string>
using namespace std;

//백준 1100: 하얀 칸
//내용: 체스판의 하얀 칸 위에 있는 말의 수 찾기

string map[8];
int cnt = 0;

int main() {
	for (int i = 0; i < 8; i++)
		getline(cin, map[i]);

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i % 2 == 0 && j%2==0) || (i % 2 == 1 && j % 2 == 1)) {
				if (map[i].at(j) == 'F')
					cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}