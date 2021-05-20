#include <iostream>
#include <algorithm>
using namespace std;

//백준 1037: 약수
//내용: 진짜 약수 n를 입력받고 원래 수를 출력하기
//사용알고리즘: algorithm 헤더의 sort

long arr[50] = { 0 };

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);
	cout << arr[0] * arr[n - 1];

	return 0;
}