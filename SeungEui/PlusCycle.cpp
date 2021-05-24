#include <stdio.h>
int first = 0;
int i, temp = 0;
int cycle[2];

int Cycle() {
	do {
		temp = cycle[1];
		cycle[1] = (cycle[0] + cycle[1]) % 10;
		cycle[0] = temp;
		i++;
	} while (first != cycle[0] * 10 + cycle[1]);
	return i;
}
int main() {
	scanf_s("%d", &first);

	if (first >= 10) {
		cycle[0] = first / 10;
		cycle[1] = first % 10;
		printf("%d",Cycle());
	}
	else if (first > 0) {
		cycle[0] = first;
		cycle[1] = 0;
		first = cycle[0] * 10;
		printf("%d", Cycle());
	}
	else {
		printf("%d", 1);
	}

}