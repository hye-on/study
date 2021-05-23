#include <stdio.h>

int i, j, white = 0;
char chess[8][10];

int main() {



	for (i = 0; i < 8; i++) {

		gets_s(chess[i]);

	}
	/*
	for (i = 0; i < 8; i += 2)

		for (j = 0; j < 8; j += 2)

			if (arr[i][j] == 'F')

				cnt++;

	for (k = 1; k < 8; k += 2)

		for (l = 1; l < 8; l += 2)

			if (arr[k][l] == 'F')

				cnt++;
			*/
	for (i=0; i < 8; i++)
		for (j=0; j < 8; j++)
			if (chess[i][j] == 'F')
				if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1))
					white++;
		

	printf("%d", white);

}
