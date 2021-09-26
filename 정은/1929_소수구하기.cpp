#include <iostream>
#include <vector>
using namespace std;

int arr[1000000];
vector<int> v;

void prime(int n) {
	arr[0] = arr[1] = -1;
	for (int i = 2; i <= n; i++)
		arr[i] = i;
	for (int i = 2; i*i <= n; i++) {
		if (arr[i] == i)
			for (int j = i*i; j <= n; j += i)
				if(arr[j] == j)
					arr[j] = i;
	}
	for (int i = 0; i <= n; i++)
		if (arr[i] == i)
			v.push_back(i);
}

int main() {
	int m, n;
	cin >> m >> n;
	prime(n);
	for (int i = 0; i < v.size(); i++)
		if (m <= v[i])
			cout << v[i] << '\n';
}
