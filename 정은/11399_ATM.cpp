#include <iostream>
#include <algorithm>
#define MAX 1000
using namespace std;

int N;
int person[MAX];
int time = 0;

int main() {
	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> person[i];

	sort(person, person + N);

	for (int i = 0; i < N; i++)
		for (int j = 0; j <= i; j++)
			time += person[j];

	cout << time << "\n";

	return 0;
}
