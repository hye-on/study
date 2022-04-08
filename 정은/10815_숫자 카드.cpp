#include <iostream>
#include <algorithm>
using namespace std;

int arr1[500001];
int arr2[500001];
int n, m;

void binary_search(int n, int val) {
	int low = 0;
	int high = n - 1;

	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr1[mid] == val) {
			cout << "1\n";
			return;
		}
		else {
			if (arr1[mid] > val)
				high = mid - 1;
			else
				low = mid + 1;
		}
	}
	cout << "0\n";
}

int main() {

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr1[i];

	cin >> m;
	for (int i = 0; i < m; i++)
		cin >> arr2[i];

	sort(arr1, arr1 + n);

	// 첫번째 숫자 카드 배열과 두번째 숫자 카드 배열 중 한 가지 값을 대조함 
	// (첫번째 숫자 카드 배열에 카드가 존재하는 지 확인)
	for (int i = 0; i < m; i++)
		binary_search(n, arr2[i]);

	return 0;
}
