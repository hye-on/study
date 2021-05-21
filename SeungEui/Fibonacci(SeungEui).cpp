#include <stdio.h>

int a, i;
int inArr[100], count0[41], count1[41] = {};

// N이 0에서 40까지의 LUT 만들기
//0의 개수 미리 구해두는 함수
void fibonacci0()
{
	count0[0] = 1;
	//index 2부터 40까지 구할 것
	//ex : outArr0[2] = outArr0[0] + outArr0[1];
	for (i = 2; i < 41; i++) {
		count0[i] = count0[i - 2] + count0[i - 1];
	}
}
void fibonacci1()
{
	count1[1] = 1;
	//index 2부터 40까지 구할 것
	//ex : outArr1[2] = outArr1[0] + outArr1[1];
	for (i = 2; i < 41; i++) {
		count1[i] = count1[i - 2] + count1[i - 1];
	}
}

int main() {
	

	scanf_s("%d", &a);

	for (i = 0; i < a; i++) {
		scanf_s("%d", &inArr[i]);
	}
	
	fibonacci0();
	fibonacci1();


	for (i = 0; i < a; i++) {
		printf("%d %d\n", count0[inArr[i]], count1[inArr[i]]);
	}

}
