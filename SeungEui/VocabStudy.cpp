#include <stdio.h>
#include <string.h>
char str[1000000];
int i, j, max = 0;
int count[26] = {};
char outA[26] = {};

void Init() {
	//����� ���ĺ� �迭 outA �ʱ�ȭ
	// char ch = 'A' = 65
	for (i = 0; i < 26; i++) {
		outA[i] = 65 + i;
	}
}
void Count() {
	// ���ĺ� ī��Ʈ�ϱ�, str�� ���� ���ĺ��� ����ִ� ��ŭ�� �ݺ� ����
	// char ch = 'a' = 97
	i = 0;
	while (str[i] != 0) {
		for (j = 0; j < 26; j++)
			if (str[i] == j + 65 || str[i] == j + 97) count[j]++;
		i++;
	}

}
int FindMax() {
	// count[]�� �ִ� max ã��
	max = count[0];
	for (i = 1; i < 26; i++)
		if (max < count[i])
			max = count[i];
	return max;
}
char PrintMax() {
	// max�� ���� ���� ���� count[]�� index ���� many Ȯ���ϱ� = �ִ� ��� ���ĺ��� ���� ������ Ȯ��
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