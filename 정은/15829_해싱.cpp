#include <iostream>
#include <string>
using namespace std;
#define M 1234567891
#define R 31

long long L;
long long answer = 0;
string alphabets;

int main() {
	cin >> L;
	cin >> alphabets;

	for (int i = 0; i < L; i++) {
		char alphabet = alphabets[i] - 'a' + 1;  // 알파벳 한 글자 저장
	
		long long r = 1;
		for (int j = 1; j <= i; j++) {  // r의 지수만큼 31 곱하기
			r *= R;
			
			if (r > M)
				r = r % M;
		}

		answer += (long long)alphabet * r;

		if (answer > M)
			answer = answer % M;
	}
	cout << answer;
}
