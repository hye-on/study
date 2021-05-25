#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//���� 1159: �� ���
//����: �Էµ� ���ڿ��� �� ���ĺ��� 5�� �̻� ���� ���� ����ϱ�

vector<pair<char, int>> characters;

bool compare(pair<char, int>& a, pair<char, int>& b) {
	return a.first < b.first;
}

int main() {
	int cnt;
	cin >> cnt;
	cin.ignore();

	for (int i = 0; i < cnt; i++) {
		string buff;
		getline(cin, buff);

		bool isExist = false;

		for (int j = 0; j < characters.size(); j++) {
			if (characters.at(j).first == buff.at(0)) {
				characters.at(j).second++;
				isExist = true;
				break;
			}
		}

		if (!isExist) {
			characters.push_back(make_pair(buff.at(0), 1));
		}
	}

	//���ĺ� �� ����
	sort(characters.begin(), characters.end(), compare);

	bool find = false;
	for (int i = 0; i < characters.size(); i++) {
		if (characters.at(i).second >= 5) {
			cout << characters.at(i).first;
			find = true;
		}
	}

	if (!find) cout << "PREDAJA";

	return 0;
}