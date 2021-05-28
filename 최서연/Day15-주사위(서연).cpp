#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//���� 1233: �ֻ���
//����: �ٸ�ü�� �ֻ��� 3���� �־����� �� ������ ������ ���� ���� ������ ���� �� ����ϱ�

vector<pair<int, int>> result;

bool compare(pair<int, int>& a, pair<int, int>& b) {
	if (a.second == b.second)
		return a.first < b.first;
	return a.second > b.second;
}

int main() {
	int s1, s2, s3;
	cin >> s1 >> s2 >> s3;

	for (int i1 = 1; i1 <= s1; i1++) {
		for (int i2 = 1; i2 <= s2; i2++) {
			for (int i3 = 1; i3 <= s3; i3++) {
				int buff = i1 + i2 + i3;
				bool isExist = false;
				for (unsigned vec_i = 0; vec_i < result.size(); vec_i++) {
					if (result[vec_i].first == buff) {
						result[vec_i].second++;
						isExist = true;
					}
				}
				
				if (!isExist) {
					result.push_back(make_pair(buff, 0));
				}
			}
		}
	}

	sort(result.begin(), result.end(), compare);

	cout << result.at(0).first;

	return 0;
}