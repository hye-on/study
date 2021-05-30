#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int n;
const int MAX = 25;
vector<string> map;
int visit[MAX][MAX] = { 0 };
vector<int> dangi;
int house_count = 0;

void dfs(int x, int y) {
	house_count++;
	visit[x][y] = dangi.size() + 1;

	//상하좌우 집인지 판별
	if (x - 1 >= 0 && map[x - 1][y] == '1' && visit[x - 1][y] == 0) {		//상단
		dfs(x - 1, y);
	}
	else if (x + 1 < n && map[x + 1][y] == '1' && visit[x + 1][y] == 0) {	//하단
		dfs(x + 1, y);
	}
	else if (y - 1 >= 0 && map[x][y - 1] == '1' && visit[x][y - 1] == 0) {	//왼쪽
		dfs(x, y - 1);
	}
	else if (y + 1 < n && map[x][y + 1] == '1' && visit[x][y + 1] == 0) {	//오른쪽
		dfs(x, y + 1);
	}
	cout << "(" << x << " " << y + 1 << ":" << map[x][y + 1] << "," << visit[x][y + 1]<< ")" << endl;
}

int main() {
	cin >> n;

	cin.ignore();
	for (int i = 0; i < n; i++) {
		string buff;
		getline(cin, buff);
		map.push_back(buff);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visit[i][j] == 0 && map[i][j] == '1') {	//방문하지 않는 집을 발견 시
				cout << i << " " << j << endl;
				dfs(i, j);
				dangi.push_back(house_count);
				house_count = 0;
			}
		}
	}
	
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << visit[i][j];
		}
		cout << endl;
	}
	
	sort(dangi.begin(), dangi.end());
	cout << dangi.size() << endl;
	for (int i = 0; i < dangi.size(); i++) {
		cout << dangi.at(i) << endl;
	}

	return 0;
}