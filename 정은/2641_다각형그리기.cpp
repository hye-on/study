#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string s, temp;
string s1 = "";
string s2 = "";
string result[100];

int main(int argc, char *argv[])
{
	int n, m, count = 0;
	cin >> n;

	char c;
	for (int i = 0; i < n; i++) {
		cin >> c;

		s1 += c; // ������
		s2 += (c + 1) % 4 + 1 + '0'; // �ݴ����(1<->3, 2<->4)
	}
	reverse(s2.begin(), s2.end()); // ������ ���������Ƿ� reverse ����

	cin >> m;

	while (m--) {
		s = "";
		for (int i = 0; i < n; i++) {
			cin >> c;
			s += c;
		}

		temp = s;

		for (int i = 0; i < n; i++) {
			if (temp == s1 || temp == s2) { // ������� �ݴ���⿡ ���� ��
				result[count++] = s;
				break;
			}
			temp = temp.substr(1, temp.length()) + temp[0]; // �������� �ٲ���
		}
	}

	cout << count << '\n';

	for (int i = 0; i < count; i++) {
		for (int j = 0; j < s1.length(); j++) {
			cout << result[i][j] << " ";
		}
		cout << '\n';
	}

	return 0;
}
