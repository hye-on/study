#include <iostream> 
#include <vector>
using namespace std;

int prime[100000];
vector<int> v;
int ans[1000000][2];

void primeNum(int n) {
	prime[0] = prime[1] = -1;
	for (int i = 2; i <= n; i++)
		prime[i] = i;
	for (int i = 2; i*i <= n; i++) {
		if (prime[i] == i)
			for (int j = i * i; j <= n; j += i)
				prime[j] = i;
	}
	for (int i = 2; i <= n; i++)
		if (prime[i] == i)
			v.push_back(i);
}

int main() {
	int t, n, cnt, idx = 0;
	bool isDiv = false;

	cin >> t;

	while (t--) {
		cin >> n;
		primeNum(n);
		for (int i = 0; i < v.size(); i++) {
			cnt = 0; isDiv = false;
			while (n%v[i] == 0 && n != 1) {
				n /= v[i];
				cnt++;
				isDiv = true;
			}
			if (isDiv) {
				ans[idx][0] = v[i];
				ans[idx++][1] = cnt;
			}
		}
	}
	for (int i = 0; i < idx; i++)
		cout << ans[i][0] << ' ' << ans[i][1] << '\n';
}
