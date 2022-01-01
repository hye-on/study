#include <iostream>
#include <cstring>
using namespace std;

int map[101];

int main() {
	int col, p;
	cin >> col >> p;

	memset(map, -3, sizeof(map)); // map을 -3으로 초기화
	for (int i = 0; i < col; i++)
		cin >> map[i];

	int ans = 0;
	for (int i = 0; i < col; i++) {
		switch (p) {
		case 1:
			ans++; //0
			if (map[i] == map[i + 1] && map[i + 1] == map[i + 2] && map[i + 2] == map[i + 3]) ans++; //0000
			break;
		case 2:
			if (map[i] == map[i + 1]) ans++; //00
			break;
		case 3:
			if (map[i] == map[i + 1] && map[i + 1] + 1 == map[i + 2]) ans++; //001
			if (map[i] == map[i + 1] + 1) ans++;  //10
			break;
		case 4:
			if (map[i] == map[i + 1] + 1 && map[i + 1] == map[i + 2]) ans++; //100
			if (map[i] + 1 == map[i + 1]) ans++;  //01
			break;
		case 5:
			if (map[i] == map[i + 1] && map[i + 1] == map[i + 2])  ans++;  //000
			if (map[i] == map[i + 2] && map[i] == map[i + 1] + 1)  ans++;  //101
			if (map[i] + 1 == map[i + 1])  ans++;  //01
			if (map[i] == map[i + 1] + 1)  ans++;  //10
			break;
		case 6:
			if (map[i] == map[i + 1] && map[i + 1] == map[i + 2])  ans++;  //000
			if (map[i] + 1 == map[i + 1] && map[i + 1] == map[i + 2])    ans++;  //011 
			if (map[i] == map[i + 1])    ans++;  //00
			if (map[i] == map[i + 1] + 2)  ans++;  //20
			break;
		case 7:
			if (map[i] == map[i + 1] && map[i + 1] == map[i + 2])  ans++;  //000
			if (map[i] == map[i + 1] && map[i + 1] == map[i + 2] + 1)    ans++;  //110
			if (map[i] == map[i + 1])    ans++;  //00
			if (map[i] + 2 == map[i + 1])  ans++;  //02
			break;
		}
	}

	cout << ans << endl;
}
