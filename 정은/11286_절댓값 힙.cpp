#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int N, x;
priority_queue<int, vector<int>, greater<int>> pq1; // ��� �������� ���� ť (1 2 3 ...)
priority_queue<int> pq2; // ���� �������� ���� ť (-1 -2 -3 ...)

int main() {
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> x;

		if (x == 0) {
			if (pq1.empty() && pq2.empty())  // �迭�� ����ִ� ���
				cout << "0\n";
			else {
				if (pq1.empty()) {  // ��� ����x ���
					cout << pq2.top() << '\n';
					pq2.pop();
				}
				else if (pq2.empty()) {  // ���� ����x ���
					cout << pq1.top() << '\n';
					pq1.pop();
				}
				else {  // ���, ���� �� ������ ���
					if (pq1.top() < -pq2.top()) {
						cout << pq1.top() << '\n';
						pq1.pop();
					}
					else {
						cout << pq2.top() << '\n';
						pq2.pop();
					}
				}
			}
		}
		else if (x > 0)  // ����� ��
			pq1.push(x);
		else  // ������ ��
			pq2.push(x);
	}
}
