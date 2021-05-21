#include <iostream>
using namespace std;

//백준 1065: 한수
//내용: n이 입력되었을 때, 1에서 n까지의 수 중, 각 자리수가 등차수열인 '한수'를 찾아 출력하기(ex. 123 444 765)

int count_han = 0;

//한수 찾기
void find_han(int n) {
	int buff_arr[3] = { 0 };	//1000일때는 한수가 아님으로 천의 자리수는 제외함
	int device = 10;

	//n이 한자리, 두자리 수 일때는 무조건 한수이다.
	if (n / 100 < 1) {
		count_han = n;
	}
	else {
		for (int i = 100; i <= n; i++) {
			//배열에 각 자리 수를 저장
			int buff = i;
			for (int j = 0; j < 3; j++) {
				buff_arr[j] = buff % device;
				buff /= device;
			}

			if (buff_arr[2] - buff_arr[1] == buff_arr[1] - buff_arr[0] && i!=1000) {
				count_han += 1;
			}
		}
		//한자리, 두자리수 더해주기
		count_han += 99;
	}
}

int main() {
	int n;
	cin >> n;
	find_han(n);
	cout << count_han;

	return 0;
}