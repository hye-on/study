#include <stdio.h>
#include <string.h>
char str[1000000];
int i, j, max = 0;
int count[26] = {};
char outA[26] = {};

void Init() {
	//출력할 알파벳 배열 outA 초기화
	// char ch = 'A' = 65
	for (i = 0; i < 26; i++) {
		outA[i] = 65 + i;
	}
}
void Count() {
	// 알파벳 카운트하기, str에 실제 알파벳이 담겨있는 만큼만 반복 실행
	// char ch = 'a' = 97
	i = 0;
	while (str[i] != 0) {
		for (j = 0; j < 26; j++)
			if (str[i] == j + 65 || str[i] == j + 97) count[j]++;
		i++;
	}

}
int FindMax() {
	// count[]의 최댓값 max 찾기
	max = count[0];
	for (i = 1; i < 26; i++)
		if (max < count[i])
			max = count[i];
	return max;
}
char PrintMax() {
	// max와 같은 값을 가진 count[]의 index 개수 many 확인하기 = 최다 사용 알파벳이 여러 개인지 확인
	int maxIndex, many = 0;
	max = FindMax();

	
	for (i = 0; i < 26; i++)
		if (count[i] == max) { 
			many++; 
			maxIndex = i;}

	Init();
	if (many == 1) { 
		return outA[maxIndex]; }
	else return '?';

}
int main() {
	gets_s(str);
	Count();
	printf("%c", PrintMax());

}