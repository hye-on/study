#include <iostream>
using namespace std;

//���� 1655��: ����� ���ؿ�
// ��� �˰���: ������
//input_Que >> ������ �� �����ϴ� �迭	result_Que >> �߾Ӱ� ���� �迭

int input[100000] = { 0 };
int result[100000] = { 0 };

void quick_sort(int start, int end) {
	if (start >= end) return;

	int pivot = start;
	int i = pivot + 1;	//���� ���
	int j = end;		//������ ���
	int temp;

	while (i <= j) {
		while (i <= end && input[i] <= input[pivot])
			i++;
		while (j > start && input[j] >= input[pivot])
			j--;

		if (i > j) {
			temp = input[j];
			input[j] = input[pivot];
			input[pivot] = temp;
		}
		else {
			temp = input[i];
			input[i] = input[j];
			input[j] = temp;
		}
	}

	quick_sort(start, j - 1);
	quick_sort(j + 1, end);
}

void search_middle(int que_size) {
	quick_sort(0, que_size);
	if (que_size % 2 == 0)
		result[que_size] = input[que_size / 2];
	else 
		result[que_size] = input[(que_size - 1) / 2];
}

int main() {

	int count;
	scanf_s("%d", &count);

	for (int i = 0; i < count; i++) {
		scanf_s("%d", &input[i]);
		search_middle(i);
	}
	for (int i = 0; i < count; i++)
		printf("%d\n", result[i]);

	return 0;
}