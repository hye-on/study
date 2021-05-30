#include <iostream>
#include <vector>
using namespace std;

//백준 2606: 바이러스
//내용: 1번 컴퓨터와 연결되어 바이러스에 감염될 수 있는 컴퓨터의 갯수 구하기
//알고리즘: dfs

vector<vector<int>> grid;
bool visit[101] = { false };
int virus_count = 0;

void dfs(int num) {
	virus_count++;
	visit[num] = true;

	for (int i = 0; i < grid[num].size(); i++) {
		if (visit[grid[num][i]] == false) 
			dfs(grid[num][i]);
	}
}

int main() {
	int com_n;
	cin >> com_n;
	for (int i = 0; i < com_n; i++) {
		grid.push_back(vector<int> ());
	}

	int line_n;
	cin >> line_n;
	for (int i = 0; i < line_n; i++) {
		int first, second;
		cin >> first >> second;
		grid[first - 1].push_back(second - 1);
		grid[second - 1].push_back(first - 1);
	}

	dfs(0);

	cout << virus_count - 1;

	return 0;
}