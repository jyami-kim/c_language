#include <stdio.h>

#define MAX_ROW 10
#define MAX_COL 10

void matrix_plus(int a[][MAX_COL], int b[][MAX_COL], int c[][MAX_COL], int row, int col);

int main(int argc, char **argv) {
	int A[MAX_ROW][MAX_COL];
	int B[MAX_ROW][MAX_COL];
	int C[MAX_ROW][MAX_COL];
	int row, col;
	int i, j;

	printf("row?\n");
	scanf("%d", &row);

	printf("col?\n");
	scanf("%d", &col);

	for (i = 0;i < row;i++) {
		for (j = 0;j < col;j++) {
			printf("A[%d][%d]", i, j);
			scanf("%d", &A[i][j]);
		}
	}

	printf("\nA=\n");

	for (i = 0;i < row;i++) {
		for (j = 0;j < col;j++) {
			printf("%3d", A[i][j]);
		}
		printf("\n");
	}


	for (i = 0;i < row;i++) {
		for (j = 0;j < col;j++) {
			printf("B[%d][%d]", i, j);
			scanf("%d", &B[i][j]);
		}
	}

	printf("\nB=\n");
	for (i = 0;i < row;i++) {
		for (j = 0;j < col;j++) {
			printf("%3d", B[i][j]);
		}
		printf("\n");
	}

	matrix_plus(A, B, C, row, col);
	printf("\nC=A+B\n");
	for (i = 0;i < row;i++) {
		for (j = 0;j < col;j++) {
			printf("%3d", C[i][j]);
		}
		printf("\n");
	}

	return 0;

}

void matrix_plus(int a[][MAX_COL], int b[][MAX_COL], int c[][MAX_COL], int row, int col) {
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}