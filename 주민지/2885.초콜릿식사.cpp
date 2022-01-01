#include<iostream>
using namespace std;
#define MAX 20

int main() {
	int K;
	cin >> K;
	int num = 1, min_n=-1, how1=0,how2=0;
	for (int i = 0; i < 20; i++) {
		num *= 2;
	}
	for (int i = 20; i >= 0; i--) {
		if (min_n==-1 && K > num) {
			min_n = num*2;
			how1 = i+1;
		}
		else if (min_n == -1 && K == num) {
			min_n = num;
			how1 = i;
		}
		if (K >= num) {
			K -= num;
			if (K == 0) {
				how2 = i;
				break;
			}
		}
		num /= 2;
	}

	cout << min_n << " " << how1-how2 << '\n';
}
