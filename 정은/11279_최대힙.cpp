#include <iostream>
#include <queue>
using namespace std;

int N;
int x;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;

	priority_queue<int> pq;

	for (int i = 0; i < N; i++) {
		cin >> x;

		if (x != 0)
			pq.push(x);
		else {
			if (pq.empty())
				cout << 0 << "\n";
			else {
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
	}

	return 0;
}
