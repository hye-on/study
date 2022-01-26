#include<iostream>
#include<vector>
using namespace std;

int N, sum;
vector<int> arr;
int cnt = 0;

void solve(int idx, int tmp) {

	if (idx == N) 
		return;
	if (tmp + arr[idx] == sum) 
		cnt++;

	solve(idx + 1, tmp);
	solve(idx + 1, tmp + arr[idx]);
}

int main() {
	cin >> N >> sum;
	int tmp;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		arr.push_back(tmp);
	}

	solve(0, 0);
	cout << cnt << "\n";

	return 0;
}
