#include <iostream>
#include <vector>
#include <algorithm>
#include<string>

using namespace std;

int n;
int map[25][25]; //n�� 25 ���� �����Ƿ�
bool check[25][25];
int dx[4] = { 1, 0, -1, 0 };  // 1.�Ʒ�,������,��,����
int dy[4] = { 0, 1, 0, -1 };
int countHouses;
vector<int> vec;

//0 1 1 0 1 0 0     2���� �迭,�츮�� �����ϴ� ��ǥ X
//0 1 1 0 1 0 1
//1 1 1 0 1 0 1
//0 0 0 0 1 1 1
//0 1 0 0 0 0 0
//0 1 1 1 1 1 0
//0 1 1 1 0 0 0
void dfs(int x, int y) {
	if (check[x][y] == true || map[x][y] == 0) { //�湮�߰ų� ���� �ƴϰų�
		return;
	}
	countHouses++;
	check[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];   
		int ny = y + dy[i];
		if (nx >= 0 && nx < n && ny >= 0 && ny < n) {//���� �ȿ� �ִ��� Ȯ��
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

	for (int i = 0; i < n; i++) { //���� for ���� ���ؼ� �˻�
		for (int j = 0; j < n; j++) {
			if (map[i][j] == 1 && check[i][j] == false) {
				countHouses = 0;  // �ʱ�ȭ
				dfs(i, j);
				vec.push_back(countHouses); //���� ���� 
			}
		}
	}

	cout << vec.size() << endl; //������ ���� 
	sort(vec.begin(), vec.end()); //������ ���� ���� ������������ ����
	for (int i = 0; i < vec.size(); i++) { //���
		cout << vec[i] << endl;
	}
}
