#include <iostream>
#include <vector>
#include <algorithm>
#include<string>

using namespace std;

int n;
int map[25][25]; //n은 25 보다 작으므로
bool check[25][25];
int dx[4] = { 1, 0, -1, 0 };  // 1.아래,오른쪽,위,왼쪽
int dy[4] = { 0, 1, 0, -1 };
int countHouses;
vector<int> vec;

//0 1 1 0 1 0 0     2차원 배열,우리가 생각하는 좌표 X
//0 1 1 0 1 0 1
//1 1 1 0 1 0 1
//0 0 0 0 1 1 1
//0 1 0 0 0 0 0
//0 1 1 1 1 1 0
//0 1 1 1 0 0 0
void dfs(int x, int y) {
	if (check[x][y] == true || map[x][y] == 0) { //방문했거나 집이 아니거나
		return;
	}
	countHouses++;
	check[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];   
		int ny = y + dy[i];
		if (nx >= 0 && nx < n && ny >= 0 && ny < n) {//범위 안에 있는지 확인
			dfs(nx, ny);
		}
	}
}

int main() {
	cin >> n;

	string input;
	for (int i = 0; i < n; i++) {
		cin >> input;
		for (int j = 0; j < n; j++) {
			map[i][j] = input[j] - '0';
		}
	}

	for (int i = 0; i < n; i++) { //이중 for 문을 통해서 검사
		for (int j = 0; j < n; j++) {
			if (map[i][j] == 1 && check[i][j] == false) {
				countHouses = 0;  // 초기화
				dfs(i, j);
				vec.push_back(countHouses); //집의 개수 
			}
		}
	}

	cout << vec.size() << endl; //단지의 개수 
	sort(vec.begin(), vec.end()); //단지의 집의 개수 오름차순으로 정렬
	for (int i = 0; i < vec.size(); i++) { //출력
		cout << vec[i] << endl;
	}
}
