#include <iostream>
#include <vector>
using namespace std;

//���� 2606: ���̷���
//����: 1�� ��ǻ�Ϳ� ����Ǿ� ���̷����� ������ �� �ִ� ��ǻ���� ���� ���ϱ�
//�˰���: dfs

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