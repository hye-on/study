#include <stdio.h>
int n; // 선수의 수
char name[150][40] = {}; // 모든 선수의 성
int count[26] = {}; // 알파벳 분포
int i, j = 0;
char a = 'a';
int main() { 
	scanf_s("%d", &n);

	//선수가 5명 미만이면 기권
	if (n < 5) {
		printf("PREDAJA");
		return 0;
	}

	for (i = 0; i <= n; i++)
		gets_s(name[i]);

	// 선수의 수만큼 반복
	for (i = 1; i <= n; i++) {
		// 선수의 첫 성만 알파벳만큼 반복
		for (j = 0; j < 26; j++)
			if (name[i][0] == a + j) count[j]++;
	}

	j = 0;
	for (i = 0; i < 26; i++) {
		if (count[i] >= 5) { 
			printf("%c", a + i);
		}
		else j++;
	}

	if (j == 26) printf("PREDAJA");
}