#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int N, x;
priority_queue<int, vector<int>, greater<int>> pq1; // 양수 오름차순 저장 큐 (1 2 3 ...)
priority_queue<int> pq2; // 음수 내림차순 저장 큐 (-1 -2 -3 ...)

int main() {
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> x;

		if (x == 0) {
			if (pq1.empty() && pq2.empty())  // 배열이 비어있는 경우
				cout << "0\n";
			else {
				if (pq1.empty()) {  // 양수 존재x 경우
					cout << pq2.top() << '\n';
					pq2.pop();
				}
				else if (pq2.empty()) {  // 음수 존재x 경우
					cout << pq1.top() << '\n';
					pq1.pop();
				}
				else {  // 양수, 음수 다 존재할 경우
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
		else if (x > 0)  // 양수일 때
			pq1.push(x);
		else  // 음수일 때
			pq2.push(x);
	}
}
