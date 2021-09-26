#include <iostream>
#include <algorithm>
using namespace std;

struct Time
{
	int start;
	int end;
};

int comp(Time t1, Time t2) {
	if (t1.end == t2.end)
		return t1.start < t2.start; //<:뒤로 갈수록 큰 값으로 정렬, >:뒤로 갈수록 작은 값으로 정렬
	else
		return t1.end < t2.end;
}

int main() {
	Time arr[100000];
	int n, cnt=1;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i].start >> arr[i].end;
	sort(arr, arr + n, comp);

	int time = arr[0].end;
	for (int i = 1; i < n; i++) {
		if (time <= arr[i].start) {
			cnt++;
			time = arr[i].end;
		}
	}
	cout << cnt;
}
