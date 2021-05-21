#include <stdio.h>
int cOrder[1001] = {};
int i, j = 0;

void FillOrder() {
	for (i = 1; i < 100; i++)
		cOrder[i] = i;
	int a, b, c = 0;
	for (i = 100; i < 1000; i++) {
		a = i / 100;
		b = (i - a * 100) / 10;
		c = i % 10;
		if (a + c == 2*b)
			cOrder[i] = i;
	}
}

int main() {
	int n, a = 0;
	scanf_s("%d", &n);
	FillOrder();
	for (i = 1; i <= n; i++) {
		if (cOrder[i] != 0) a++;
	}
	printf("%d", a);

}
