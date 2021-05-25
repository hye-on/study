#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

//���� 1157: �ܾ����
//����: �Էµ� �ܾ�� ���� ���� ���� ���ĺ� ���

vector<pair<char, int>> characters;

bool compare(const pair<char, int>& a, const pair<char, int>& b) {
	if (a.second == b.second)
		return a.second > b.second;
	return a.second > b.second;
}

int main() {
	string word;
	getline(cin, word);

	bool isExist = false;

	for (int i = 0; i < word.length(); i++) {
		word.at(i) = toupper(word.at(i));
		for (int j = 0; j < characters.size(); j++) {
			if (word.at(i) == characters.at(j).first) {
				characters.at(j).second++;
				isExist = true;
			}
		}
		if (!isExist) {
			characters.push_back(make_pair(word.at(i), 1));
		}
		isExist = false;
	}

	sort(characters.begin(), characters.end(), compare);

	if (word.length() > 1 && characters.at(0).second == characters.at(1).second)
		cout << "?";
	else
		cout << characters.at(0).first;

	return 0;
}