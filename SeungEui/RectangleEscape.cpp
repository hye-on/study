#include <stdio.h>

int i, j = 0;
int d[4] = {};
void Sort(int arr[]) { // 오름차순
	int temp = 0;
	for (; i < 3; i++) 
		for(j=i+1;j<4;j++)
			if (arr[i] > arr[j]) {
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
}
int main() {
	scanf_s("%d", &d[0]);
	scanf_s("%d", &d[1]);
	scanf_s("%d", &d[2]);
	scanf_s("%d", &d[3]);
	d[2] = d[2] - d[0];
	d[3] = d[3] - d[1];
	Sort(d);
	printf("%d", d[0]);
}