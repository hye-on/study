#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[1000];
int cnt[1000];
vector<int> ans;

int main() {
	int n, c, t = 0;
	cin >> n;
	cin >> c;

	fill_n(cnt, 1000, 1);
	for (int i = 0; i < c; i++) {
		int num = 1;
		bool isDel = false;
		cin >> arr[i];
		t++;
		for (int j = 0; j < i; j++) {
			if (cnt[j] && arr[i] == arr[j]) {
				cnt[i]--;
				cnt[j]++;
				t--;
				break;
			}
		}
		if (t > n) {
			while (true) {
				for (int j = 0; j < i; j++)
					if (cnt[j] == num) {
						cnt[j] = 0;
						isDel = true;
						break;
					}
				if (isDel)
					break;
				num++;
			}
			t--;
		}
	}
	for (int i = 0; i < c; i++) {
		if (cnt[i])
			ans.push_back(arr[i]);
	}
	sort(ans.begin(), ans.end());
	if(ans.size()<n){
		for (int i = 0; i < ans.size(); i++)
			cout << ans[i] << ' ';
	}
	else {
		for (int i = 0; i < n; i++)
			cout << ans[i] << ' ';
	}
}
