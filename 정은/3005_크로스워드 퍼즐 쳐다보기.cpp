#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

char map[20][20];
vector<string> v;

int main() {
	int row, col;
	cin >> row >> col;

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			cin >> map[i][j];

	string temp = "";
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (map[i][j] == '#') {
				if (temp.size() > 1)
					v.push_back(temp);
				temp.clear();
				continue;
			}
			temp += map[i][j];
		}
		if (!temp.empty() && temp.size() > 1)
			v.push_back(temp);
		temp.clear();
	}

	for (int j = 0; j < col; j++) {
		for (int i = 0; i < row; i++) {
			if (map[i][j] == '#') {
				if (temp.size() > 1)
					v.push_back(temp);
				temp.clear();
				continue;
			}
			temp += map[i][j];
		}
		if (!temp.empty() && temp.size() > 1)
			v.push_back(temp);
		temp.clear();
	}

	sort(v.begin(), v.end());

	cout << v.front() << "\n";
}
